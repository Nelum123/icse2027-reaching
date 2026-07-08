# Evaluation of Structure-Aware Statistical Reachability Analysis of Program States

This package reproduces the tables and figures in the paper from the pipeline notebook
**`analysis_pipeline.ipynb`**. Running the notebook top-to-bottom regenerates every
results CSV, table, and plot used in the paper.

---

## 1. Requirements

- **Python 3.14** (the notebook was developed and tested on 3.14.5).
- Jupyter (Notebook or Lab) to execute the notebook.
- The following packages (versions the package was validated against):

  | Package     | Version |
  |-------------|---------|
  | numpy       | 2.5.0   |
  | pandas      | 3.0.3   |
  | matplotlib  | 3.11.0  |
  | openpyxl    | 3.1.5   |

The standard-library modules `pickle`, `struct`, `lzma`, `zlib`, `json`, `math`,
`array`, `collections`, `pathlib` are also used but require no installation.

### Set up the environment

A virtual environment named `icse2027` is expected (it matches the notebook's
kernel `icse2027 (3.14.5)`). To recreate it:

```bash
cd icse2027            # the package root (folder containing analysis_pipeline.ipynb)
python3.14 -m venv icse2027
source icse2027/bin/activate            # Windows: icse2027\Scripts\activate
pip install --upgrade pip
pip install numpy==2.5.0 pandas==3.0.3 matplotlib==3.11.0 openpyxl==3.1.5 jupyter ipykernel
python -m ipykernel install --user --name icse2027 --display-name "icse2027 (3.14.5)"
```

> `matplotlib` is also installed by a cell inside the notebook (Section 10), so it is
> safe to run even if you skip the manual install above.

---

## 2. Directory layout

Run the notebook from the package root. It reads and writes paths **relative** to that
directory, so do not change the working directory.

```
icse2027/
├── analysis_pipeline.ipynb        ← the pipeline (run this)
├── Data/                          ← raw binary execution stores / .pkl (see §4)
├── icfg/                          ← per-parser inter-procedural CFGs: parsera.json … parserf.json
├── ground_truth_structural_logprob/   ← per-block structural ln Pr(b) ground truth
├── results/                       ← OUTPUT: structural pipeline CSVs, plots, tables


```

All output is written under `results/` and its subfolders (`results/structural/`,
`results/convergence/`).

---


## 3. Configuration flags

The key flags are set in the config cell near the top of the notebook:

- **`GENERATE_PKL_FROM_BINARY`** (default `False`)
  - `False` — skip decoding the raw binary stores; load existing `.pkl` files from `Data/`.
    The structural pipeline also **resumes** from any CSVs already present in
    `results/structural/`, so it will not recompute rows that already exist. This is the
    fast path to regenerate all tables and plots.
  - `True` — decode the raw binary execution stores (`.bin` + `.idx`) under `Data/` and
    (over)write the `.pkl` files. Only needed if you are rebuilding from raw fuzzing data.
- **`EVAL_FRACTION`** (default `0.5`) — split point: first 50% of executions build the
  reachable set, remaining 50% measures ground-truth dynamic probability.
- **`CHECKPOINTS`** (`[0.10, 0.25, 0.50, 0.75, 1.00]`) — campaign fractions at which
  estimates are recorded.
- **`LOAD_FROM_CSV`** (Section 11, default `True`) — build convergence plots from the
  saved CSVs rather than in-memory pipeline output.

> **To force a full recomputation from scratch:** delete (or move) the existing files in
> `results/structural/` before running, so the resume logic starts empty. To rebuild from
> raw binary data as well, set `GENERATE_PKL_FROM_BINARY = True` and ensure the `.bin`/`.idx`
> stores are present in `Data/`.

---

## 5. Inputs that must be present

Because the raw per-execution binary stores are large, the pipeline is designed to run
from precomputed intermediates. Before running, confirm these inputs exist:

- `icfg/parser{a..e}.json` — inter-procedural CFGs (required for structural ground truth).
- `ground_truth_structural_logprob/parser{a..e}.json` — per-block structural log-probabilities.
- `Data/` — either the decoded `.pkl` stores (with `GENERATE_PKL_FROM_BINARY = False`) **or**
  the raw `.bin`/`.idx` stores (with `GENERATE_PKL_FROM_BINARY = True`). If neither is present,
  the structural pipeline resumes from the CSVs already in `results/structural/`.





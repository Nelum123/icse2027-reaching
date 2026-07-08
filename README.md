# Evaluation of Structure-Aware Statistical Reachability Analysis of Program States

This repository contains the artifacts and experimental pipelines used in the paper **"Evaluation of Structure-Aware Statistical Reachability Analysis of Program States."**

The repository consists of two main components:

## 1. `custom-parser-pipeline-main`

This pipeline generates the synthetic recursive-descent parsers used in the evaluation.

Detailed instructions for generating the parsers are available in the `README.md` file within the `custom-parser-pipeline-main` directory.

The generated parsers save in the `analysis_pipeline/parsers/` directory. Each parser has its own subdirectory containing:

- The parser grammar.
- The generated C source code (`parser.c`).

## 2. `analysis_pipeline`

This pipeline reproduces all experimental results presented in the paper, including every table and figure.

Please refer to the `README.md` file in the `analysis_pipeline` directory for detailed instructions on reproducing the experiments and generating the results.
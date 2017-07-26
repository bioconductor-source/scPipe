# scPipe


<img src=inst/scPipe.pdf height="200">

scPipe is an R package that allows barcode demultiplexing, transcript mapping and quality control of raw sequencing data generated by multiple 3 prime end sequencing protocols that include CEL-seq, MARS-seq and Drop-seq. scPipe produces a count matrix that is essential for downstream analysis along with a user-friendly HTML report that summarises data quality. These results can be used as input for downstream analyses including normalization, visualization and statistical testing.

## Installation

### from bioconductor

coming soon

### from github

```{r}
  install.packages("devtools")
  devtools::install_github("LuyiTian/scPipe")
```

## TODO

* update UMI correction methods

## Getting started

the general workflow of scPipe:

<img src=inst/workflow.pdf height="800">


## Acknowledgements
This package is inspared by `scater` and `scran` packages. and can be easily converted to `SCESet` object in `scater`.

loadModule("multinet",TRUE)

# Functions loading some well-known small datasets
# Larger datasets can be downloaded from the book webpage: multilayer.it.uu.se

ml.aucs <- function() {
	read.ml(system.file("extdata", "aucs.mpx", package="multinet"),"AUCS")
}

ml.bankwiring <- function() {
    read.ml(system.file("extdata", "bankwiring.mpx", package="multinet"),"Bank Wiring")
}

ml.florentine <- function() {
	read.ml(system.file("extdata", "florentine.mpx", package="multinet"),"Florentine families")
}

ml.monastery <- function() {
    read.ml(system.file("extdata", "monastery.mpx", package="multinet"),"Monastery")
}

ml.tailorshop <- function() {
    read.ml(system.file("extdata", "tailorshop.mpx", package="multinet"),"Tailorshop")
}

ml.toy <- function() {
    read.ml(system.file("extdata", "book.mpx", package="multinet"),"toy")
}

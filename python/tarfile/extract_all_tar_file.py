import tarfile

t = tarfile.open("/run/tmp/tarfile_add.tar", "r")
t.extractall("/tmp/")

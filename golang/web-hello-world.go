package main

import (
    "fmt"
    "net/http"
)

func main() {
    http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
        fmt.Fprint(w, "Hello world out of GFW\n")
    })

    http.ListenAndServe(":8888", nil)
}

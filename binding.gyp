{
  "targets": [
    {
        "target_name": "addon",
        "sources": [ 
            "./src/addon.cc",
            "./src/functions.cc" 
            ],
        "include_dirs" : [
            "<!(node -e \"require('nan')\")"
        ]
    }
  ]
}
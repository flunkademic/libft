
git status
git branch --show-current
git rev-parse --abbrev-ref HEAD

git remote -v

git remote show origin


cat .git/config

pixel@laura MINGW64 ~/Desktop/_projects/_42/libft/.git (GIT_DIR!)
$ cat config
[core]
        repositoryformatversion = 0
        filemode = false
        bare = false
        logallrefupdates = true
        symlinks = false
        ignorecase = true
[remote "origin"]
        url = https://github.com/flunkademic/libft.git
        fetch = +refs/heads/*:refs/remotes/origin/*
[branch "main"]
        remote = origin
        merge = refs/heads/main

pixel@laura MINGW64 ~/Desktop/_projects/_42/libft/.git (GIT_DIR!)
$

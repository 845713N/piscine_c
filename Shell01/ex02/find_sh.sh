find * -type f -name "*.sh" | rev | cut -d '.' -f 2- | cut -f 1 -d '/' |rev

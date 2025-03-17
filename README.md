# CSML
## Introduction
"CSML" stands for "CSML-Styled Markup Language". It originally means "CSS-Styled Markup Language", but i decided to turn it into a recursive acronym, hence its current name. 

It is heavily influenced by CSS and JSON, as seen from its name. It is meant to be a substitute for HTML and meant to be easier.

## Syntax
There will be no "<!doctype html>" stuff, as it is not very efficient and is almost like PASCAL. CSML is simple as JavaScript:

```
head {
    title {
        <enter title here>
    }
}
body {
    h1 {
        id: "Heading";
        <Enter heading here>
    }
    p {
        Hello from CSML!
    }
    p {
        a {
            href: "https://github.com/moraxborax/csml";
            GitHub Repo
        }
    }
    script {
        console.log("Hello World!\n")
    }
}
```

## Translator
I will make a translator to translate it into HTML. Building a renderer from scratch is quite hard, so let's just use prebuilt HTML renderers.
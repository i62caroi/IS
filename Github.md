# GitHub no es Git
![fallo en la imagen](https://lh6.googleusercontent.com/Ry--MLieGMXkpHMcJGe9NhyGulLIXpXRE5xQB-_rt_u4BEzv06YNrBOHA3iXjUCoHTGPPdH1m4rDoF_tw9xlDaZgluV9pFsP9U4dU9p3OP4cHMxcTDx8jEksJevNUYbSMw)

**Comandos GitHub I**  
añadir repositorio remoto:  

`git remove add origin url`  

Ver repositorios remotos:  

`git remove -v`  

Eliminar repositorio remoto:  

`git remote rm origin`  

Añadir cambios del repositorio local al remoto:  

`git push -u origin master`  

Añadir cambios del repositorio remoto al local:  

`git pull`  


**Comandos GitHub II**  
Ver *branches* remotos:  

`git branch -r`  

Ver todos los *branches*:  

`git brach -a`  

Clonar un repositorio remoto:  

`git clone url`  

**Dar seguimiento a *branches* remotos**  

* LOCAL--->REMOTO  

    1.Cambios en el repositorio local.  

    2.Commit de los cambios.  

    3.Añadir cambios a repositorio remoto:  
`git push`  

* REMOTO--->LOCAL  
~~~

git fetch origin  
git merge origin/master

~~~  

* En un solo paso:  

`git pull`  


**Operaciones con *branches* remotos**  
* Creación:  

    1.Crear branch local.  

    2.Hacer cambios en dicho branch.  

    3.Hacer commit.  

    4.Copiar el branch al repositorio remoto:  
`git push -u origin branch_remoto`  
* Copia:  

`git checkout -b local remoto`  

* Eliminacion:  

`git push origin --delete branch remoto`

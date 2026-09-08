Hola, mi nombre es Roque Ortiz, estudio ingeniería en mi país, Honduras. Aquí comparto con quienes hayan descubierto este repositorio: en este proyecto trato de crear dos redes neuronales gemelas que corren en el mismo código y comparten las mismas variables y estructura; lo único propio de cada una son sus pesos.

El objetivo de este proyecto es ser un escalón más que me lleve a desarrollar mi propio modelo de inteligencia artificial tipo transformers. No es algo grande, es más que todo un pasatiempo.

Una vez logrado ese objetivo en este escalón, las redes gemelas se entrenarán sin supervisión con un mecanismo de recompensa en vivo que las lleve a descifrar las reglas y estrategias para jugar y, eventualmente, ganar el popular juego Tres en Raya o X-O, como lo conocí yo.

En este punto ya tengo lo que son las dos redes gemelas, lo pueden ver en jugador1 y jugador2 que están dentro del struct redes; son idénticas, comparten el mismo tamaño y estructura — básicamente fue un copiar y pegar. La red funciona y muestra resultados alentadores, claro que no los resultados que espero, pues es entendible ya que aún no hay entrenamiento, ni propagación del error hacia atrás, ni tampoco hay un cálculo de error ni el sistema de corrección por recompensa o castigo.

Este proyecto está detenido, al igual que el proyecto principal, mientras sigo estudiando los conceptos matemáticos como lo son la pendiente, la derivada y funciones — aún me falta mucho.

Jugador uno: 90
Jugador dos: 0
Empate: 0

Si lo compilas te dará esos resultados; eso es lo que se espera en una red cuyos pesos y bias son estáticos, porque, como comenté arriba, las redes aún no se entrenan, ni se calcula el error, ni mucho menos se actualizan los pesos — que es algo muy importante y espero, antes de acabar 2026, tener listo el código completo.

Esto lo estoy desarrollando en Dev-C++, pero con una configuración precisa:

Compilador: TDM-GCC 4.9.2 64-bit Release
Estándar de C++: C++11 (-std=c++11)
Enlazador (linker): -static-libgcc

Como soy nuevo en este lugar y aún hay mucho que no entiendo, y viéndome con tiempo limitado, trataré de subir otros códigos donde sí hay redes pequeñas funcionales — estamos hablando de poco más de unos cientos de parámetros. Trataré de corregir algunos errores de la red más grande y funcional (con serias limitaciones) esa si tiene un aproximado de poco mas de 10,000 parametros.

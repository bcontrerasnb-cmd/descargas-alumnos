<!DOCTYPE html>
<html lang="en">

<head>
<meta charset="utf-8" />
<title>sin título</title>
<meta name="generator" content="Geany 2.1" />
</head>

<body>

</body>

</html>

<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zona Deportiva - Blog de Deportes</title>

    <!-- BLOQUE CSS (DISEÑO) -->
    <style id="estilos-ia">

        * {
            box-sizing: border-box;
        }

        body {
            margin: 0;
            padding: 0;
            font-family: Arial, Helvetica, sans-serif;
            color: #172033;
            background: #f1f5f9;
            line-height: 1.6;
        }

        /* MENÚ DE NAVEGACIÓN */
        nav {
            display: flex;
            justify-content: center;
            align-items: center;
            flex-wrap: wrap;
            gap: 12px;
            padding: 20px;
            background: linear-gradient(110deg, #087443, #0756a5, #b91c1c);
            box-shadow: 0 4px 14px rgba(0,0,0,0.18);
        }

        /* BOTONES */
        .btn {
            border: none;
            border-radius: 8px;
            padding: 11px 19px;
            background: #078447;
            color: white;
            font-size: 15px;
            font-weight: bold;
            cursor: pointer;
            transition: 0.3s;
        }

        .btn:hover {
            transform: translateY(-3px);
            filter: brightness(1.1);
        }

        .btn-secundario {
            background: #1769bd;
        }

        .btn-peligro {
            background: #c62828;
        }

        /* SECCIONES */
        section {
            width: min(1000px, calc(100% - 32px));
            min-height: 300px;
            margin: 35px auto;
            padding: 32px;
            background: white;
            border-radius: 16px;
            box-shadow: 0 8px 28px rgba(15,23,42,0.08);
        }

        /* PANTALLA PRINCIPAL */
        #vista-inicio {
            display: block;
            text-align: center;
            padding: 75px 32px;
            color: white;
            background:
                linear-gradient(
                    115deg,
                    rgba(0,91,49,0.94),
                    rgba(0,69,135,0.88),
                    rgba(153,20,35,0.88)
                ),
                url("https://images.unsplash.com/photo-1461896836934-ffe607ba8211?auto=format&fit=crop&w=1600&q=80");
            background-position: center;
            background-size: cover;
        }

        #vista-inicio h1 {
            font-size: clamp(2.2rem, 6vw, 4rem);
            text-transform: uppercase;
            letter-spacing: 1px;
            text-shadow: 0 3px 10px rgba(0,0,0,0.35);
        }

        #vista-inicio p {
            max-width: 650px;
            margin: 0 auto 28px;
            font-size: 1.15rem;
        }

        /* TÍTULOS */
        h2 {
            margin-top: 0;
            padding-bottom: 12px;
            color: #075b3b;
            border-bottom: 4px solid #d62828;
        }

        h3 {
            color: #0756a5;
        }

        /* FORMULARIOS */
        label {
            display: inline-block;
            margin: 10px 0 6px;
            color: #243247;
            font-weight: bold;
        }

        input[type="text"],
        textarea {
            width: 100%;
            padding: 12px 14px;
            border: 1px solid #cbd5e1;
            border-radius: 8px;
            background: #f8fafc;
            color: #172033;
            font: inherit;
            outline: none;
        }

        input[type="text"]:focus,
        textarea:focus {
            border-color: #087443;
            box-shadow: 0 0 0 3px rgba(8,116,67,0.13);
        }

        input[type="file"] {
            display: block;
            max-width: 100%;
            margin: 8px 0 16px;
            padding: 9px;
            border: 1px dashed #94a3b8;
            border-radius: 8px;
            background: #f8fafc;
        }

        textarea {
            min-height: 130px;
            resize: vertical;
        }

        /* MURO DE PUBLICACIONES */
        #muro {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 22px;
            margin-top: 25px;
        }

        /* TARJETAS */
        .tarjeta-post {
            overflow: hidden;
            display: flex;
            flex-direction: column;
            padding: 18px;
            border: 1px solid #e2e8f0;
            border-top: 5px solid #078447;
            border-radius: 12px;
            background: white;
            box-shadow: 0 5px 18px rgba(15,23,42,0.07);
            transition: 0.3s;
        }

        .tarjeta-post:hover {
            transform: translateY(-4px);
            box-shadow: 0 10px 25px rgba(15,23,42,0.13);
        }

        .t-post {
            margin: 0 0 12px;
            color: #0756a5;
            font-size: 1.3rem;
        }

        .img-post {
            display: block;
            width: 100%;
            height: 190px;
            margin-bottom: 12px;
            border-radius: 9px;
            background: #e2e8f0;
            object-fit: cover;
        }

        .p-post {
            flex: 1;
            color: #475569;
            overflow-wrap: anywhere;
            white-space: pre-wrap;
        }

        .caja-botones {
            display: flex;
            flex-wrap: wrap;
            gap: 9px;
            margin-top: 12px;
        }

        .caja-botones .btn {
            flex: 1;
        }

        /* PANTALLAS OCULTAS */
        #vista-publicaciones,
        #vista-crear,
        #vista-editar {
            display: none;
        }

        /* DISEÑO PARA CELULARES */
        @media (max-width: 600px) {

            nav {
                gap: 8px;
                padding: 14px 10px;
            }

            nav .btn {
                flex: 1 1 130px;
                padding: 10px;
                font-size: 14px;
            }

            section {
                width: calc(100% - 20px);
                margin: 18px auto;
                padding: 22px 17px;
            }

            #vista-inicio {
                padding: 55px 18px;
            }

            #muro {
                grid-template-columns: 1fr;
            }

            .caja-botones .btn {
                flex: 1 1 100%;
            }
        }

    </style>
</head>

<body>

    <!-- BLOQUE HTML -->

    <!-- MENÚ DE NAVEGACIÓN -->
    <nav>
        <button class="btn" onclick="cambiarVista('vista-inicio')">
            Inicio
        </button>

        <button class="btn" onclick="cambiarVista('vista-publicaciones')">
            Noticias deportivas
        </button>

        <button class="btn" onclick="cambiarVista('vista-crear')">
            Crear publicación
        </button>
    </nav>

    <!-- 1. PANTALLA DE INICIO -->
    <section id="vista-inicio">

        <h1>Bienvenido a Zona Deportiva</h1>

        <p>
            Tu espacio para compartir noticias, fotografías,
            opiniones y publicaciones sobre el mundo del deporte.
        </p>

        <button class="btn"
            onclick="cambiarVista('vista-crear')">
            ¡Publicar una noticia deportiva!
        </button>

        <button class="btn btn-secundario"
            onclick="cambiarVista('vista-publicaciones')">
            Ir al muro
        </button>

    </section>

    <!-- 2. PANTALLA DEL MURO DE PUBLICACIONES -->
    <section id="vista-publicaciones">

        <h2>Noticias y publicaciones deportivas</h2>

        <div id="muro">
            <!-- Aquí JavaScript dibujará las publicaciones -->
        </div>

    </section>

    <!-- 3. PANTALLA PARA CREAR PUBLICACIÓN -->
    <section id="vista-crear">

        <h2>Crear publicación deportiva</h2>

        <label for="tit">Título:</label><br>
        <input type="text" id="tit"
            placeholder="Ejemplo: Chile gana su partido..."><br><br>

        <label for="imgArchivo">
            Subir imagen desde el computador:
        </label><br>

        <input type="file" id="imgArchivo"
            accept="image/*"><br><br>

        <label for="imgUrl">
            O pegar enlace de una imagen:
        </label><br>

        <input type="text" id="imgUrl"
            placeholder="https://ejemplo.com/foto.jpg"><br><br>

        <label for="txt">Contenido:</label><br>

        <textarea id="txt" rows="5"
            placeholder="Escribe tu noticia deportiva..."></textarea><br><br>

        <button class="btn" onclick="crearPost()">
            Publicar
        </button>

        <button class="btn btn-secundario"
            onclick="cambiarVista('vista-publicaciones')">
            Cancelar
        </button>

    </section>

    <!-- 4. PANTALLA PARA EDITAR PUBLICACIÓN -->
    <section id="vista-editar">

        <h2>Editar publicación</h2>

        <input type="hidden" id="edit-imgActual">

        <label for="edit-tit">Título:</label><br>
        <input type="text" id="edit-tit"><br><br>

        <label for="edit-imgArchivo">
            Cambiar imagen:
        </label><br>

        <input type="file" id="edit-imgArchivo"
            accept="image/*"><br><br>

        <label for="edit-imgUrl">
            O cambiar enlace de imagen:
        </label><br>

        <input type="text" id="edit-imgUrl"
            placeholder="Dejar vacío para mantener la foto actual"><br><br>

        <label for="edit-txt">Contenido:</label><br>

        <textarea id="edit-txt" rows="5"></textarea><br><br>

        <button class="btn" onclick="guardarEdicion()">
            Guardar cambios
        </button>

        <button class="btn btn-secundario"
            onclick="cambiarVista('vista-publicaciones')">
            Cancelar
        </button>

    </section>

    <!-- BLOQUE JAVASCRIPT -->

    <script>

        // 1. LISTA DE PUBLICACIONES

        let miListaDePublicaciones = [];

        let posicionEnLaLista = null;


        // 2. CAMBIAR ENTRE PANTALLAS

        function cambiarVista(pantallaDestino) {

            document.getElementById('vista-inicio').style.display = 'none';

            document.getElementById('vista-publicaciones').style.display = 'none';

            document.getElementById('vista-crear').style.display = 'none';

            document.getElementById('vista-editar').style.display = 'none';

            document.getElementById(pantallaDestino).style.display = 'block';
        }


        // 3. PROCESAR IMÁGENES

        function obtenerImagen(cajaArchivo, cajaLink, cajaFotoVieja = null) {

            let archivoDePC =
                document.getElementById(cajaArchivo).files[0];

            let linkDeInternet =
                document.getElementById(cajaLink).value.trim();

            if (archivoDePC) {

                return URL.createObjectURL(archivoDePC);

            } else if (linkDeInternet !== "") {

                return linkDeInternet;

            } else if (cajaFotoVieja) {

                return document.getElementById(cajaFotoVieja).value;
            }

            return "";
        }


        // 4. MOSTRAR PUBLICACIONES

        function mostrarPosts() {

            let cajaMuro = document.getElementById("muro");

            cajaMuro.innerHTML = "";

            for (let i = 0; i < miListaDePublicaciones.length; i++) {

                let postActual = miListaDePublicaciones[i];

                cajaMuro.innerHTML += `

                    <div class="tarjeta-post">

                        <h3 class="t-post">
                            ${postActual.titulo}
                        </h3>

                        ${postActual.imagen ?
                            `<img src="${postActual.imagen}" class="img-post" alt="Imagen deportiva">`
                            : ""
                        }

                        <p class="p-post">
                            ${postActual.texto}
                        </p>

                        <div class="caja-botones">

                            <button class="btn btn-secundario"
                                onclick="abrirEditar(${i})">
                                Editar
                            </button>

                            <button class="btn btn-peligro"
                                onclick="borrarPost(${i})">
                                Eliminar
                            </button>

                        </div>

                    </div>
                `;
            }
        }


        // 5. CREAR PUBLICACIÓN

        function crearPost() {

            let tituloEscrito =
                document.getElementById("tit").value.trim();

            let textoEscrito =
                document.getElementById("txt").value.trim();

            let imagenFinal =
                obtenerImagen("imgArchivo", "imgUrl");

            if (tituloEscrito === "" || textoEscrito === "") {

                alert("Debes escribir un título y un contenido.");

                return;
            }

            miListaDePublicaciones.push({

                titulo: tituloEscrito,

                imagen: imagenFinal,

                texto: textoEscrito
            });

            document.getElementById("tit").value = "";

            document.getElementById("txt").value = "";

            document.getElementById("imgUrl").value = "";

            document.getElementById("imgArchivo").value = "";

            mostrarPosts();

            cambiarVista('vista-publicaciones');
        }


        // 6. ELIMINAR PUBLICACIÓN

        function borrarPost(numeroEnLaFila) {

            let confirmacion =
                confirm("¿Seguro que quieres eliminar esta publicación?");

            if (confirmacion === true) {

                miListaDePublicaciones.splice(numeroEnLaFila, 1);

                mostrarPosts();
            }
        }


        // 7. EDITAR PUBLICACIÓN

        function abrirEditar(numeroEnLaFila) {

            posicionEnLaLista = numeroEnLaFila;

            let postParaCorregir =
                miListaDePublicaciones[numeroEnLaFila];

            document.getElementById("edit-tit").value =
                postParaCorregir.titulo;

            document.getElementById("edit-txt").value =
                postParaCorregir.texto;

            document.getElementById("edit-imgActual").value =
                postParaCorregir.imagen;

            document.getElementById("edit-imgArchivo").value = "";

            document.getElementById("edit-imgUrl").value = "";

            cambiarVista('vista-editar');
        }


        // 8. GUARDAR EDICIÓN

        function guardarEdicion() {

            let nuevoTitulo =
                document.getElementById("edit-tit").value.trim();

            let nuevoTexto =
                document.getElementById("edit-txt").value.trim();

            let nuevaImagen =
                obtenerImagen(
                    "edit-imgArchivo",
                    "edit-imgUrl",
                    "edit-imgActual"
                );

            if (nuevoTitulo === "" || nuevoTexto === "") {

                alert("Debes completar el título y el contenido.");

                return;
            }

            miListaDePublicaciones[posicionEnLaLista].titulo =
                nuevoTitulo;

            miListaDePublicaciones[posicionEnLaLista].texto =
                nuevoTexto;

            miListaDePublicaciones[posicionEnLaLista].imagen =
                nuevaImagen;

            mostrarPosts();

            cambiarVista('vista-publicaciones');
        }

    </script>

</body>
</html>

 

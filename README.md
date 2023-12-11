<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>My Portfolio | Ilham Adi Purnomo</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
  <link rel="stylesheet" href="style.css">
  <style>
    .jumbotron {
      padding-top: 2rem;
      text-align: center;
      background-color: #e2edff;
    }
    .img-thumbnail {
      display: block;
      margin: 10px auto;
    }
  </style>
</head>
<body id="home">
  <nav id="mainNavbar" class="navbar navbar-expand-lg navbar-light bg-warning shadow-sm">
    <div class="container">
      <a class="navbar-brand" href="#">Ilham A.P</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarText" aria-controls="navbarText" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarText">
        <ul class="navbar-nav me-auto mb-2 mb-lg-0">
          <li class="nav-item">
            <a class="nav-link active" aria-current="page" href="#home">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#about">About</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#Projects">Projects</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#Contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>
  
  <section class="jumbotron text-center">
    <img src="Foto.jpg" alt="Ilham A.P" width="100" class="rounded-circle img-thumbnail">
    <h1 class="display-4">Ilham Adi Purnomo</h1>
    <p class="lead">Lecturer | Programming</p>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 320">
      <path fill="#ffffff" fill-opacity="1" d="M0,64L40,101.3C80,139,160,213,240,218.7C320,224,400,160,480,112C560,64,640,32,720,58.7C800,85,880,171,960,181.3C1040,192,1120,128,1200,112C1280,96,1360,128,1400,144L1440,160L1440,320L1400,320C1360,320,1280,320,1200,320C1120,320,1040,320,960,320C880,320,800,320,720,320C640,320,560,320,480,320C400,320,320,320,240,320C160,320,80,320,40,320L0,320Z"></path>
    </svg>
  </section>

  <section id="about">
    <div class="container">
      <div class="row text-center mb-3">
        <div class="col">
          <h2>About me</h2>
        </div>
      </div>
      <div class="row justify-content-center fs-5 text-center">
        <div class="col-md-4">
          <p>Assalamualaikum, perkenalkan nama saya Ilham Adi Purnomo. Saya bersekolah di SMK Negeri 1 Kraksaan.</p>
        </div>
        <div class="col-md-4">
          <p>Di SMK saya diajarkan banyak mata pelajaran, dan mata pelajaran yang saya sukai adalah coding atau bahasa pemrograman.</p>
        </div>
      </div>
    </div>
<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 320">
  <path fill="#e2edff" fill-opacity="1" d="M0,192L48,213.3C96,235,192,277,288,261.3C384,245,480,171,576,154.7C672,139,768,181,864,186.7C960,192,1056,160,1152,160C1248,160,1344,192,1392,208L1440,224L1440,320L1392,320C1344,320,1248,320,1152,320C1056,320,960,320,864,320C768,320,672,320,576,320C480,320,384,320,288,320C192,320,96,320,48,320L0,320Z"></path>
</svg>

  </section>
    <!-- penutup About -->
<!-- Projects -->
<section id="Projects">
  <div class="container">
    <div class="row text-center">
      <div class="col">
        <h2>My Projects</h2>
      </div>
    </div>
    <div class="row">
      <!-- Project 1 -->
      <div class="col-md-4 mb-3 text-center">
        <div class="card" style="width: 18rem;">
          <img src="Screenshot_20231211_114612_Chrome.png" class="card-img-top" alt="Projects 1">
          <div class="card-body">
            <p class="card-text">Ini adalah project pertama saya adalah membuat kalkulator untuk 20 operasi matematika<a href="kalkulator.html" download>Unduh Projects 1 </a></p>
          </div>
        </div>
      </div>
      <!-- Project 2 -->
      <div class="col-md-4 mb-3 text-center">
        <div class="card" style="width: 18rem;">
          <img src="Screenshot_20231211_120248.png" class="card-img-top" alt="Projects 2">
          <div class="card-body">
            <p class="card-text">project saya yang satu ini adalah membuat kalkulator matriks.<a href="array ( tugas matriks dan penjumlahan matriks.cxx" download>Unduh Projects 2 </a></p>
          </div>
        </div>
      </div>
      <!-- Project 3 -->
      <div class="col-md-4 mb-3 text-center">
        <div class="card" style="width: 18rem;">
          <img src="Screenshot_20231211_115956.png" class="card-img-top" alt="Projects 3">
          <div class="card-body">
            <p class="card-text">Project ini di gunakan untuk memhitung diskon atau kalkulator diskon<a href="diskon harga 1.cxx" download>Unduh Projects 3 </a></p>
          </div>
        </div>
      </div>
    </div>
  </div>
  <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 320"><path fill="#ffffff" fill-opacity="1" d="M0,160L48,149.3C96,139,192,117,288,117.3C384,117,480,139,576,165.3C672,192,768,224,864,202.7C960,181,1056,107,1152,69.3C1248,32,1344,32,1392,32L1440,32L1440,320L1392,320C1344,320,1248,320,1152,320C1056,320,960,320,864,320C768,320,672,320,576,320C480,320,384,320,288,320C192,320,96,320,48,320L0,320Z"></path></svg>
</section>
<!-- End of Projects -->
<!-- kontak me -->
<selection id="Contact">
   <div class="container">
     <div class="row text-center">
       <div class="col">
         <h2> Contact me</h2>
       </div>
     </div>
     <div class="row justify-content-center">
       <div class="col-md-6">
         <form id="contactForm">
           <div class="mb-3">
    <label for="name" class="form-label">Nama lengkap</label>
    <input type="text" class="form-control" id="name" aria-describedby="name"/>
  </div>
  <div class="mb-3">
    <label for="email" class="form-label">Email </label>
    <input type="email" class="form-control" id="email" aria-describedby="email"/>
  </div>
  
  <div class="form-floating">
  <textarea class="form-control" placeholder="Leave a comment here" id="Pesan" style="height: 100px"></textarea>
  <label for="pesa">Pesan</label>
</div>
  <br>
  <button type="submit" class="btn btn-primary" onclick="sendWhatsAppMessage()">Kirim</button>
</form>
       </div>
     </div>
   </div>
   <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1440 320"><path fill="#0d6efd" fill-opacity="1" d="M0,160L48,170.7C96,181,192,203,288,218.7C384,235,480,245,576,250.7C672,256,768,256,864,234.7C960,213,1056,171,1152,154.7C1248,139,1344,149,1392,154.7L1440,160L1440,320L1392,320C1344,320,1248,320,1152,320C1056,320,960,320,864,320C768,320,672,320,576,320C480,320,384,320,288,320C192,320,96,320,48,320L0,320Z"></path></svg>
</selection>
<!-- akhir kontak -->
<!-- footer -->
  <footer class="bg-primary text-white text-center">
    <p> Created with love by<a href="https://instagram.com/ihm_adi_prnm?igshid=OGQ5ZDc2ODk2ZA==" class="text-white fw-bold">Ilham Adi Purnomo</a></p>
  </footer>
<!-- akhir footer -->
    <!-- akhir Projects-->
    <!-- script -->
    <script>
  document.addEventListener("DOMContentLoaded", function () {
    var navbar = document.getElementById("mainNavbar");

    window.addEventListener("scroll", function () {
      if (window.scrollY > 50) {
        navbar.classList.add("fixed-top");
      } else {
        navbar.classList.remove("fixed-top");
      }
    });
  });
  
  function sendWhatsAppMessage() {
    // Gantilah nomor WhatsApp dan pesan sesuai dengan kebutuhan Anda
    var phoneNumber = "6281234567890";
    var message = document.getElementById("Pesan").value;

    // Format URL WhatsApp
    var whatsappURL = "https://wa.me/" + phoneNumber + "?text=" + encodeURIComponent(message);

    // Buka URL WhatsApp di tab baru
    window.open(whatsappURL, "_blank");
  }
</script>

    
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>
    <!-- akhir script -->
  </body>
</html>

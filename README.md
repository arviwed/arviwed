<a name="readme-top"></a>



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <!--<a href="https://github.com/ArvidWedtstein/rgbOS">
    <img src="static/images/ArvidLogo.png" alt="Logo" width="80" height="80">
  </a>-->

  <h3 align="center">RGBos</h3>

  <p align="center">
    Ubuntu kernel clone.
    <br />
    <a href="https://github.com/ArvidWedtstein/rgbOS"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/ArvidWedtstein/rgbOS/issues">Report Bug</a>
    ·
    <a href="https://github.com/ArvidWedtstein/rgbOS/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#learned">What i learned</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project



This project started because i got bored.
Cloned the ubuntu kernel, 
went through most pain ever. and tried to learn Assembly (never again)

### Built With

This project was built with:

* [![C][C]][C-url]
* [![ASM][ASM]][asm-url]
* [![C++][C++]][c++-url]



<!-- GETTING STARTED -->
## Getting Started

To get started with this project you need to have GNU and QEMU installed. 


### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/ArvidWedtstein/rgbOS.git
   ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

1. Build docker image: ```docker build buildenv -t rgbos-buildenv```

2. Enter build environment: ```docker run --rm -it -v %cd%:/root/env rgbos-buildenv```

3. Build for x86: ```make build-x86_64```

4. Emulate: ```qumu-system-x86_64 -cdrom dist/x86_64/kernel.iso```

5. Remove the build-environment image when you are done: ```docker rmi rgbos-buildenv -f```

<!-- What i learned -->
## Learned

Learned never to touch assembly again.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Sponsors are also more than greatly appreciated! :smile:

Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request


<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Thanks to all the hundreds of stackoverflow posts that have helped make this possible


<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/ArvidWedtstein/rgbOS.svg?style=for-the-badge
[contributors-url]: https://github.com/ArvidWedtstein/rgbOS/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/ArvidWedtstein/rgbOS.svg?style=for-the-badge
[forks-url]: https://github.com/ArvidWedtstein/rgbOS/network/members
[stars-shield]: https://img.shields.io/github/stars/ArvidWedtstein/rgbOS.svg?style=for-the-badge
[stars-url]: https://github.com/ArvidWedtstein/rgbOS/stargazers
[issues-shield]: https://img.shields.io/github/issues/ArvidWedtstein/rgbOS.svg?style=for-the-badge
[issues-url]: https://github.com/ArvidWedtstein/rgbOS/issues

[C]: https://img.shields.io/badge/C-35495E?style=for-the-badge&logo=C&logoColor=FFFFFF
[C-url]: https://www.learn-c.org/
[ASM]: https://img.shields.io/badge/ASSEMBLY-35495E?style=for-the-badge&logo=assembly&logoColor=FFFFFF
[ASM-url]: https://www.ibm.com/docs/en/zos/2.1.0?topic=introduction-assembler-language
[C++]: https://img.shields.io/badge/C++-35495E?style=for-the-badge&logo=cplusplus&logoColor=FFFFFF
[C++-url]: https://cplusplus.com/

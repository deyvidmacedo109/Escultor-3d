# Escultor 3D

## Visão Geral do Projeto

O **Escultor 3D** é um programa interativo desenvolvido em C++ com a biblioteca Qt para a criação e manipulação de esculturas tridimensionais. Inspirado na ideia de um "Paint 3D", ele permite aos usuários visualizar e modificar objetos em um ambiente virtual de forma intuitiva, utilizando uma abstração da classe `Sculptor`. Este projeto foi desenvolvido como parte das atividades da disciplina de Programação Avançada.

---

## Funcionalidades Principais

* **Criação Personalizada:** Instanciação de objetos `Sculptor` com dimensões definidas pelo usuário.
* **Visualização 3D:** Permite a visualização do objeto criado, oferecendo uma representação clara da escultura.
* **Modificação de Parâmetros:** Controle sobre diversos parâmetros dos métodos da classe `Sculptor`, como raios de esferas, dimensões de caixas e cores de desenho.
* **Interface Intuitiva:** Seleção de métodos de desenho (`putVoxel`, `cutVoxel`, `putBox`, `cutBox`, `putSphere`, `cutSphere`, `putEllipsoid`, `cutEllipsoid`) através de uma toolbox visual.
* **Interação com o Mouse:** Aplicação dos métodos de desenho diretamente na matriz 3D ao movimentar o mouse com o botão esquerdo pressionado.
* **Exportação OFF:** Capacidade de salvar a escultura final em um arquivo `.OFF` para uso posterior ou visualização em outros softwares.

---

## Tecnologias Utilizadas

* **Linguagem de Programação:** C++
* **Framework de UI:** Qt (para a interface gráfica e interação)
* **Compilador:** Compatível com C++ (e.g., GCC, Clang)
* **Sistema de Build:** CMake (provavelmente, dado o `CMakeLists.txt` no seu repositório)

---

## Como Compilar e Executar o Projeto

Para configurar e executar o Escultor 3D em sua máquina, siga as instruções abaixo:

### Pré-requisitos

Certifique-se de ter os seguintes softwares instalados em seu sistema:

* **Qt Framework:** Instale a versão apropriada do Qt (Qt 5 ou Qt 6) para o seu sistema operacional. Você pode fazer o download em [qt.io/download](https://www.qt.io/download).
* **Compilador C++:** Um compilador C++ (ex: GCC para Linux/macOS, MinGW ou MSVC para Windows).
* **CMake:** Necessário para configurar o projeto. Baixe em [cmake.org/download](https://cmake.org/download/).
* **Doxygen (Opcional):** Para gerar a documentação do código. Baixe em [doxygen.nl](https://www.doxygen.nl/).

### Compilação

1.  **Clone o Repositório:**
    Abra seu terminal e clone o projeto:
    ```bash
    git clone [https://github.com/deyvidmacedo109/Escultor-3d.git](https://github.com/deyvidmacedo109/Escultor-3d.git)
    ```
2.  **Acesse o Diretório do Projeto:**
    ```bash
    cd Escultor-3d
    ```
3.  **Crie e Acesse o Diretório de Build:**
    É uma boa prática compilar o projeto em um diretório separado:
    ```bash
    mkdir build
    cd build
    ```
4.  **Configure o Projeto com CMake:**
    Execute o CMake para gerar os arquivos de build. Certifique-se de que o CMake pode encontrar suas instalações Qt.
    ```bash
    cmake ..
    ```
    * **Para usuários Windows com Visual Studio:** O comando acima gerará um arquivo `.sln`. Abra-o no Visual Studio e compile a solução.
    * **Para usuários Linux/macOS ou MinGW no Windows:** O comando acima gerará `Makefiles`.

5.  **Compile o Projeto:**
    Após a configuração do CMake, compile o projeto:
    ```bash
    make
    # Ou 'mingw32-make' no Windows com MinGW
    ```

### Execução

Após a compilação bem-sucedida, o executável do programa estará disponível no diretório `build` (ou em um subdiretório como `build/bin/` ou `build/Debug/`).

Execute o programa:

```bash
./seu_executavel_do_escultor3d
# Por exemplo: ./Escultor3d (em Linux/macOS)
# Ou Escultor3d.exe (em Windows)
``` 

## Autores

* [Deyvid Macedo](https://github.com/deyvidmacedo109)

## Links

* [Projeto Escultor 3D - Agostinho Brito](https://agostinhobritojr.github.io/curso/progav-dca3303/escultor.html)

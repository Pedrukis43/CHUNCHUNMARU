#pragma once

namespace CppWinFormsApp1 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm1 : public System::Windows::Forms::Form {
    public:
        MyForm1(void) {
            InitializeComponent();
        }

    protected:
        ~MyForm1() {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::PictureBox^ logoPictureBox;
        System::Windows::Forms::TextBox^ searchBox;
        System::Windows::Forms::Button^ searchButton;
        System::Windows::Forms::PictureBox^ mainImageBox;
        System::Windows::Forms::Panel^ navigationPanel;
        System::Windows::Forms::Label^ titleLabel;
        System::Windows::Forms::PictureBox^ secondaryImageBox;
        System::Windows::Forms::Label^ descriptionLabel;
        System::Windows::Forms::Button^ backButton; // Botón para regresar

#pragma region Código generado por el diseñador de formularios
        void InitializeComponent(void) {
            this->logoPictureBox = (gcnew System::Windows::Forms::PictureBox());
            this->searchBox = (gcnew System::Windows::Forms::TextBox());
            this->searchButton = (gcnew System::Windows::Forms::Button());
            this->mainImageBox = (gcnew System::Windows::Forms::PictureBox());
            this->navigationPanel = (gcnew System::Windows::Forms::Panel());
            this->titleLabel = (gcnew System::Windows::Forms::Label());
            this->secondaryImageBox = (gcnew System::Windows::Forms::PictureBox());
            this->descriptionLabel = (gcnew System::Windows::Forms::Label());
            this->backButton = (gcnew System::Windows::Forms::Button()); // Inicializar el botón

            // Configuración de los componentes
            this->SuspendLayout();

            // backButton
            this->backButton->Location = System::Drawing::Point(20, 5);
            this->backButton->Name = L"backButton";
            this->backButton->Size = System::Drawing::Size(130, 25);
            this->backButton->TabIndex = 6;
            this->backButton->Text = L"⬅ Regresar";
            this->backButton->UseVisualStyleBackColor = true;
            this->backButton->Click += gcnew System::EventHandler(this, &MyForm1::backButton_Click);

            // logoPictureBox
            this->logoPictureBox->BackColor = System::Drawing::Color::Gray;
            this->logoPictureBox->Location = System::Drawing::Point(20, 40);
            this->logoPictureBox->Name = L"logoPictureBox";
            this->logoPictureBox->Size = System::Drawing::Size(130, 150);
            this->logoPictureBox->TabIndex = 0;
            this->logoPictureBox->TabStop = false;
            try {
                this->logoPictureBox->Image = System::Drawing::Image::FromFile("C:\\Users\\narva\\OneDrive\\Documentos\\UNAM.jpg");
                this->logoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            }
            catch (System::IO::FileNotFoundException^) {
                MessageBox::Show("No se pudo cargar la imagen.");
            }

            // searchBox
            this->searchBox->Location = System::Drawing::Point(210, 30);
            this->searchBox->Name = L"searchBox";
            this->searchBox->Size = System::Drawing::Size(300, 22);
            this->searchBox->TabIndex = 1;

            // searchButton
            this->searchButton->Location = System::Drawing::Point(550, 30);
            this->searchButton->Name = L"searchButton";
            this->searchButton->Size = System::Drawing::Size(75, 22);
            this->searchButton->TabIndex = 2;
            this->searchButton->Text = L"Search";
            this->searchButton->UseVisualStyleBackColor = true;

            // mainImageBox
            this->mainImageBox->BackColor = System::Drawing::Color::LightGray;
            this->mainImageBox->Location = System::Drawing::Point(200, 80);
            this->mainImageBox->Name = L"mainImageBox";
            this->mainImageBox->Size = System::Drawing::Size(400, 200);
            this->mainImageBox->TabIndex = 3;
            this->mainImageBox->TabStop = false;

            // MyForm1
            this->ClientSize = System::Drawing::Size(800, 500);
            this->Controls->Add(this->backButton); // Agregar el botón al formulario
            this->Controls->Add(this->logoPictureBox);
            this->Controls->Add(this->searchBox);
            this->Controls->Add(this->searchButton);
            this->Controls->Add(this->mainImageBox);
            this->Name = L"MyForm1";
            this->Text = L"Folletos UNAM";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
            // Lógica para regresar a la página anterior
            this->Close(); // Cerrar el formulario actual
        }
    };
}



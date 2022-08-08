#pragma once
#include "about.h"
#include "test.h"
#include "stdafx.h"
#include "hmm.h"
//#include "testing.h"
#include <iostream>
using namespace std;
namespace med_proj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  About;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->About = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// About
			// 
			this->About->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->About->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->About->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->About->Location = System::Drawing::Point(257, 338);
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(204, 63);
			this->About->TabIndex = 0;
			this->About->Text = L"About";
			this->About->UseVisualStyleBackColor = false;
			this->About->Click += gcnew System::EventHandler(this, &Form1::About_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(257, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 67);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Test";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(257, 576);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 92);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Train New Speaker";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1321, 740);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1321, 740);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->About);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void About_Click(System::Object^  sender, System::EventArgs^  e) {

				 //system("about_page.html");
				 //this->Hide();
				 about^ ab =gcnew about();
				 ab->ShowDialog();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 PlaySound(TEXT("to_test_model.wav"), NULL, SND_SYNC);
				 //read_codebook();
				 test^ te =gcnew test();
				 te->ShowDialog();
				 printf("This will be the testing\n");
				 //system("pause");
			 }




			 //train button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					
					read_codebook();
					printf("You have to utter 20 recordings of each of the following word");
					MessageBox::Show("Utter 20 recordings of each Word");
					//PlaySound(TEXT("Test fever.wav"), NULL, SND_SYNC);
					// Recording_Module.exe 3 test.wav new-lambda/words/word_1/word_1_1.txt;
					
					for (int i = 1; i <= 5; i++)
					{	
						if(i==1)
						{
							MessageBox::Show("Speak the words Fever 20 times");
						}
						else if(i==2)
						{
							MessageBox::Show("Speak the words Flu 20 times");
						}
						else if(i==3)
						{
							MessageBox::Show("Speak the words Headache 20 times");
						}
						else if(i==4)
						{
							MessageBox::Show("Speak the words Allergy 20 times");
						}
						else if(i==5)
						{
							MessageBox::Show("Speak the words Vomitting 20 times");
						}
						//printf("\n for word %s\n", digit_to_word(i));
						char file[100] = "Recording_Module.exe 3 test.wav new-lambda/words/word_";
						itoa(i, word, 10);
						strcat(file, word);
						strcat(file, "/word_");
						strcat(file, word);
						strcat(file, "_");
						char itr[5];
						for (int j = 1; j <= 20; j++)
						{
							
							printf("\nFor iteration %d \n\n", j);
							itoa(j, itr, 10);
							strcat(file, itr);
							strcat(file, ".txt");
							system(file);
							file[63] = '\0';
						}
					}	
					
					PlaySound(TEXT("wait_until.wav"), NULL, SND_SYNC);
					word[0] = '1';	

					create_lambda_new();

					//--------------------------------------------------------------------------------------------------
					printf("\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
					printf("\n\nFor digit 2\n\n");

					word[0] = '2';

					create_lambda_new();

					//--------------------------------------------------------------------------------------------------
					printf("\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
					printf("\n\nFor digit 3\n\n");

					word[0] = '3';

					create_lambda_new();

					//--------------------------------------------------------------------------------------------------
					printf("\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
					printf("\n\nFor digit 4\n\n");

					word[0] = '4';

					create_lambda_new();

					//--------------------------------------------------------------------------------------------------
					printf("\n\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n");
					printf("\n\nFor digit 5\n\n");

					word[0] = '5';

					create_lambda_new();

					printf("\n\n New Lambda are generated in folder \"new lambda\" , you can paste it in main folder for testing \n\n");

					MessageBox::Show("Model is trained!! and the new lambda's are saved in the the folder new-lambda");
			 }


};
}


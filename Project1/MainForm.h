#pragma once
#include<iostream>  
#include<fstream>

namespace Project1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			saveFileDialog1->Filter = "RichTextFormat (*.rtf)|*.rtf|Text Files |*.txt";
			ToolTip^ t = gcnew ToolTip();
			t->SetToolTip(pictureBox4, "Открыть");
			t->SetToolTip(pictureBox5, "Сохранить");
			t->SetToolTip(pictureBox1, "Изменить шрифт");
			t->SetToolTip(pictureBox2, "Изменить фон текста");
			t->SetToolTip(pictureBox3, "Изменить цвет текста");
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Copy;
	private: System::Windows::Forms::ToolStripMenuItem^ Paste;
	private: System::Windows::Forms::ToolStripMenuItem^ SelectAll;
	private: System::Windows::Forms::ToolStripMenuItem^ Cut;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;



	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Copy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Paste = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SelectAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Cut = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(0, 56);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(830, 492);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::richTextBox1_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(126, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 34);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(169, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(611, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(717, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(717, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Заменить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(611, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Copy, this->Paste,
					this->SelectAll, this->Cut
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(149, 92);
			// 
			// Copy
			// 
			this->Copy->Name = L"Copy";
			this->Copy->Size = System::Drawing::Size(148, 22);
			this->Copy->Text = L"Копировать";
			this->Copy->Click += gcnew System::EventHandler(this, &MainForm::Copy_Click);
			// 
			// Paste
			// 
			this->Paste->Name = L"Paste";
			this->Paste->Size = System::Drawing::Size(148, 22);
			this->Paste->Text = L"Вставить";
			this->Paste->Click += gcnew System::EventHandler(this, &MainForm::Paste_Click);
			// 
			// SelectAll
			// 
			this->SelectAll->Name = L"SelectAll";
			this->SelectAll->Size = System::Drawing::Size(148, 22);
			this->SelectAll->Text = L"Выделить все";
			this->SelectAll->Click += gcnew System::EventHandler(this, &MainForm::SelectAll_Click);
			// 
			// Cut
			// 
			this->Cut->Name = L"Cut";
			this->Cut->Size = System::Drawing::Size(148, 22);
			this->Cut->Text = L"Вырезать";
			this->Cut->Click += gcnew System::EventHandler(this, &MainForm::Cut_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(34, 28);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(52, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 28);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(829, 548);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Текстовый редактор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SaveFile()
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		{
			return;
		}
		richTextBox1->SaveFile(saveFileDialog1->FileName);
	}
	private: System::Void OpenFile()
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		{
			return;
		}
		richTextBox1->LoadFile(openFileDialog1->FileName);
	}
	private: System::Void Search()
	{
		int index = 0;
		richTextBox1->SelectAll();
		richTextBox1->SelectionBackColor = Color::White;
		while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))
		{
			richTextBox1->Find(textBox1->Text, index, System::Windows::Forms::RichTextBoxFinds::None);
			richTextBox1->SelectionBackColor = Color::Lime;
			index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 1;
		}
	}
	private: System::Void Replace()
	{
		int index1 = 0;
		richTextBox1->SelectAll();
		richTextBox1->SelectionBackColor = Color::White;
		while (index1 < richTextBox1->Text->LastIndexOf(textBox1->Text))
		{
			richTextBox1->Find(textBox1->Text, index1, System::Windows::Forms::RichTextBoxFinds::None);
			richTextBox1->SelectionBackColor = Color::Lime;
			richTextBox1->SelectedText = textBox2->Text;
			index1 = richTextBox1->Text->IndexOf(textBox1->Text, index1) + 1;
		}
	}
	private: System::Void OpenMS_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFile();
	}
	private: System::Void SaveMS_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveFile();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		fontDialog1->ShowDialog();
		richTextBox1->SelectionFont = fontDialog1->Font;
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		colorDialog1->ShowDialog();
		richTextBox1->SelectionBackColor = colorDialog1->Color;
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		colorDialog1->ShowDialog();
		richTextBox1->SelectionColor = colorDialog1->Color;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Search();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Replace();
	}
	private: System::Void richTextBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Right) 
		{
			richTextBox1->ContextMenuStrip = contextMenuStrip1;
		}
	}
	private: System::Void Copy_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (richTextBox1->TextLength > 0)
		{
			richTextBox1->Copy();
		}
	}
	private: System::Void Paste_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (richTextBox1->TextLength > 0)
		{
			richTextBox1->Paste();
		}
	}
	private: System::Void SelectAll_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (richTextBox1->TextLength > 0)
		{
			richTextBox1->SelectAll();
		}
	}
	private: System::Void Cut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (richTextBox1->TextLength > 0)
		{
			richTextBox1->Cut();
		}
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFile();
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveFile();
	}
};
}
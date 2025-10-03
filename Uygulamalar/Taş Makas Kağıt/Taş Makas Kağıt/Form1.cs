using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Taş_Makas_Kağıt
{
    public partial class Form1 : Form
    {
        int kul;
        int bil;
        int say_bil;
        int say_kul;
        const int TAS = 1;
        const int MAKAS = 2;
        const int KAGIT = 3;
        Random rand = new Random();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            bil = rand.Next(1, 4);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (bil == TAS) label1.Text = "Berabere Kaldık..";
            if (bil == MAKAS) { label1.Text = "Sen Kazandın.."; say_kul++;}
            if (bil == KAGIT) { label1.Text = "Ben Kazandım :)"; say_bil++;}
            label4.Text = say_kul.ToString();
            label5.Text = say_bil.ToString();
            bil = rand.Next(1, 4);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (bil == TAS) { label1.Text = "Ben Kazandım :)"; say_bil++; }
            if (bil == MAKAS) label1.Text = "Berabere Kaldık..";
            if (bil == KAGIT) { label1.Text = "Sen Kazandın.."; say_kul++; }
            label4.Text = say_kul.ToString();
            label5.Text = say_bil.ToString();
            bil = rand.Next(1, 4);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (bil == TAS) { label1.Text = "Sen Kazandın.."; say_kul++; }
            if (bil == MAKAS) { label1.Text = "Ben Kazandım :)"; say_bil++; }
            if (bil == KAGIT) label1.Text = "Berabere Kaldık..";
            label4.Text = say_kul.ToString();
            label5.Text = say_bil.ToString();
            bil = rand.Next(1, 4);
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Media;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SoundPlayCS
{
    public partial class MainForm : Form
    {
        [DllImport("SoundLibD.dll", CallingConvention = CallingConvention.Cdecl, EntryPoint = "GetWavPathaName")]
        public static extern IntPtr GetWavPathaName();

        public MainForm()
        {
            InitializeComponent();
        }

        // Play a Wav File on Pressing Play Button
        private void PlayBtn_Click(object sender, EventArgs e)
        {
            // Get Wav Filename from Libary function
            IntPtr pStr = MainForm.GetWavPathaName();
            String wavFileName = Marshal.PtrToStringUni(pStr);

            // Play the wav file 
            SoundPlayer simpleSound = new SoundPlayer( wavFileName );
            simpleSound.Play();
        }

        private void CloseBtn_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}

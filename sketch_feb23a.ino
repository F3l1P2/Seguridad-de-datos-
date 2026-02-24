#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // --- INICIO: Espera de seguridad ---
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000); 

  // ==========================================
  // 1. ABRIR DISCORD
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT); // Win + S
  DigiKeyboard.delay(800);
  DigiKeyboard.print(F("discord")); 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(3000); // 3s para que cargue

  // ==========================================
  // 2. MÚSICA (Linkin Park)
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("chrome https"));
  DigiKeyboard.sendKeyStroke(55, MOD_SHIFT_LEFT); // :
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.print(F("youtu.be"));
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.println(F("eVTXPUF4Oz4")); 
  DigiKeyboard.delay(3000); 

  // ==========================================
  // 3. LANZAR WALLPAPER ENGINE EN STEAM
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("steam"));
  DigiKeyboard.sendKeyStroke(55, MOD_SHIFT_LEFT); // :
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.print(F("rungameid"));
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT); // /
  DigiKeyboard.println(F("431960")); 
  DigiKeyboard.delay(2000); 

  // ==========================================
  // 4. VOZ DEL SISTEMA (PowerShell)
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  // Escribimos: powershell -Command "Add-Type...
  DigiKeyboard.print(F("powershell "));
  DigiKeyboard.sendKeyStroke(56); // Guion (-)
  DigiKeyboard.print(F("Command "));
  DigiKeyboard.sendKeyStroke(31, MOD_SHIFT_LEFT); // Comillas (")
  DigiKeyboard.print(F("Add"));
  DigiKeyboard.sendKeyStroke(56); // Guion (-)
  DigiKeyboard.print(F("Type "));
  DigiKeyboard.sendKeyStroke(56); // Guion (-)
  DigiKeyboard.print(F("AssemblyName System.Speech"));
  DigiKeyboard.sendKeyStroke(54, MOD_SHIFT_LEFT); // Punto y coma (;)
  
  // (New-Object System.Speech.Synthesis.SpeechSynthesizer)
  DigiKeyboard.sendKeyStroke(37, MOD_SHIFT_LEFT); // Paréntesis abrir (
  DigiKeyboard.print(F("New"));
  DigiKeyboard.sendKeyStroke(56); // Guion (-)
  DigiKeyboard.print(F("Object System.Speech.Synthesis.SpeechSynthesizer"));
  DigiKeyboard.sendKeyStroke(38, MOD_SHIFT_LEFT); // Paréntesis cerrar )
  
  // .Speak('Sistemas en linea. Preparado para jugar')
  DigiKeyboard.print(F(".Speak"));
  DigiKeyboard.sendKeyStroke(37, MOD_SHIFT_LEFT); // Paréntesis abrir (
  DigiKeyboard.sendKeyStroke(45); // Comilla simple (')
  DigiKeyboard.print(F("Sistemas en linea. Preparado para jugar."));
  DigiKeyboard.sendKeyStroke(45); // Comilla simple (')
  DigiKeyboard.sendKeyStroke(38, MOD_SHIFT_LEFT); // Paréntesis cerrar )
  DigiKeyboard.sendKeyStroke(31, MOD_SHIFT_LEFT); // Comillas (")
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000); // Esperamos a que la voz termine de hablar

  // ==========================================
  // 5. MINIMIZAR TODO (Escritorio Limpio)
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); // Win + D
  DigiKeyboard.delay(500); 

  // ==========================================
  // 6. ADMINISTRADOR DE TAREAS
  // ==========================================
  // Ctrl + Shift + Esc (El código de Esc es 41)
  DigiKeyboard.sendKeyStroke(41, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);

  // ==========================================
  // 7. ABRIR APLICACIÓN DE XBOX
  // ==========================================
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT); // Win + S
  DigiKeyboard.delay(800);
  DigiKeyboard.print(F("xbox")); 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(3000); // 3s para que cargue

  // ==========================================
  // FINAL: Bloqueo del script
  // ==========================================
  for (;;) {
    digitalWrite(1, HIGH); delay(500); 
    digitalWrite(1, LOW); delay(500);
  }
}
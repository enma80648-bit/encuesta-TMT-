<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Encuesta — Motivación y Decisiones</title>
<style>
  @import url('https://fonts.googleapis.com/css2?family=DM+Serif+Display&family=Inter:wght@400;500;600&display=swap');

  :root {
    --azul:     #1B3A6B;
    --azul-mid: #2B5BA8;
    --celeste:  #E8F0FB;
    --verde:    #2A7A5A;
    --oro:      #C89A2E;
    --gris:     #F4F6FA;
    --texto:    #1A1A2E;
    --suave:    #6B7280;
    --blanco:   #FFFFFF;
    --borde:    #D1D9EC;
    --error:    #C0392B;
  }

  * { box-sizing: border-box; margin: 0; padding: 0; }

  body {
    font-family: 'Inter', sans-serif;
    background: var(--gris);
    color: var(--texto);
    min-height: 100vh;
  }

  /* HEADER */
  .header {
    background: linear-gradient(135deg, var(--azul) 0%, var(--azul-mid) 100%);
    color: var(--blanco);
    padding: 48px 24px 40px;
    text-align: center;
  }

  .header-eyebrow {
    font-size: 11px;
    font-weight: 600;
    letter-spacing: 2.5px;
    text-transform: uppercase;
    color: rgba(255,255,255,0.6);
    margin-bottom: 14px;
  }

  .header h1 {
    font-family: 'DM Serif Display', serif;
    font-size: clamp(26px, 5vw, 40px);
    line-height: 1.2;
    margin-bottom: 10px;
  }

  .header-sub {
    font-size: 14px;
    color: rgba(255,255,255,0.75);
    max-width: 500px;
    margin: 0 auto;
  }

  /* INTRO CARD */
  .intro-card {
    background: var(--celeste);
    border-left: 4px solid var(--azul-mid);
    margin: 28px auto;
    max-width: 680px;
    padding: 20px 24px;
    border-radius: 0 10px 10px 0;
    font-size: 14px;
    line-height: 1.7;
    color: var(--azul);
  }

  /* MAIN CONTAINER */
  .container {
    max-width: 680px;
    margin: 0 auto;
    padding: 0 16px 60px;
  }

  /* SECTION LABEL */
  .section-label {
    font-size: 11px;
    font-weight: 600;
    letter-spacing: 2px;
    text-transform: uppercase;
    color: var(--suave);
    margin: 36px 0 14px;
  }

  /* CARD */
  .card {
    background: var(--blanco);
    border-radius: 14px;
    padding: 28px 24px;
    margin-bottom: 14px;
    border: 1px solid var(--borde);
  }

  /* CASO HEADER */
  .caso-header {
    display: flex;
    align-items: flex-start;
    gap: 16px;
    margin-bottom: 18px;
    padding-bottom: 18px;
    border-bottom: 1px solid var(--borde);
  }

  .caso-badge {
    background: var(--azul);
    color: var(--blanco);
    font-size: 11px;
    font-weight: 600;
    letter-spacing: 1px;
    padding: 5px 12px;
    border-radius: 20px;
    white-space: nowrap;
    margin-top: 2px;
  }

  .caso-badge.verde  { background: var(--verde); }
  .caso-badge.oro    { background: var(--oro); color: #1a1a1a; }
  .caso-badge.azul2  { background: #4A3F8F; }

  .caso-title {
    font-family: 'DM Serif Display', serif;
    font-size: 18px;
    line-height: 1.3;
    color: var(--azul);
  }

  .caso-delay {
    font-size: 12px;
    color: var(--suave);
    margin-top: 3px;
  }

  /* ESCENARIO */
  .escenario {
    background: var(--gris);
    border-radius: 10px;
    padding: 16px 18px;
    font-size: 14px;
    line-height: 1.75;
    color: #374151;
    margin-bottom: 24px;
    font-style: italic;
    border-left: 3px solid var(--borde);
  }

  /* PREGUNTA */
  .pregunta {
    margin-bottom: 26px;
  }

  .pregunta:last-child { margin-bottom: 0; }

  .pregunta-label {
    font-size: 13.5px;
    font-weight: 600;
    color: var(--texto);
    margin-bottom: 6px;
    display: flex;
    align-items: center;
    gap: 8px;
  }

  .var-tag {
    font-size: 10px;
    font-weight: 700;
    letter-spacing: 1.5px;
    padding: 2px 8px;
    border-radius: 4px;
    background: var(--celeste);
    color: var(--azul-mid);
  }

  .pregunta-hint {
    font-size: 12px;
    color: var(--suave);
    margin-bottom: 12px;
  }

  /* SCALE */
  .scale-wrap {
    display: flex;
    flex-direction: column;
    gap: 6px;
  }

  .scale-row {
    display: flex;
    align-items: center;
    gap: 10px;
  }

  .scale-labels {
    display: flex;
    justify-content: space-between;
    font-size: 11px;
    color: var(--suave);
    margin-top: 4px;
  }

  input[type="range"] {
    -webkit-appearance: none;
    width: 100%;
    height: 6px;
    border-radius: 3px;
    background: var(--borde);
    outline: none;
    cursor: pointer;
  }

  input[type="range"]::-webkit-slider-thumb {
    -webkit-appearance: none;
    width: 22px;
    height: 22px;
    border-radius: 50%;
    background: var(--azul-mid);
    border: 3px solid var(--blanco);
    box-shadow: 0 1px 6px rgba(0,0,0,0.25);
    cursor: pointer;
  }

  .scale-value {
    font-size: 18px;
    font-weight: 700;
    color: var(--azul-mid);
    min-width: 32px;
    text-align: center;
  }

  /* RADIO OPTIONS */
  .radio-group {
    display: flex;
    flex-direction: column;
    gap: 8px;
  }

  .radio-option {
    display: flex;
    align-items: center;
    gap: 12px;
    padding: 12px 16px;
    border-radius: 10px;
    border: 1.5px solid var(--borde);
    cursor: pointer;
    transition: all 0.15s ease;
    font-size: 14px;
    color: var(--texto);
    background: var(--blanco);
    user-select: none;
  }

  .radio-option:hover {
    border-color: var(--azul-mid);
    background: var(--celeste);
  }

  .radio-option.selected {
    border-color: var(--azul-mid);
    background: var(--celeste);
    font-weight: 500;
    color: var(--azul);
  }

  .radio-option input[type="radio"] {
    accent-color: var(--azul-mid);
    width: 18px;
    height: 18px;
    cursor: pointer;
    flex-shrink: 0;
  }

  /* SELECT */
  select {
    width: 100%;
    padding: 12px 14px;
    border-radius: 10px;
    border: 1.5px solid var(--borde);
    font-size: 14px;
    font-family: 'Inter', sans-serif;
    color: var(--texto);
    background: var(--blanco);
    appearance: none;
    background-image: url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='12' height='8' viewBox='0 0 12 8'%3E%3Cpath d='M1 1l5 5 5-5' stroke='%236B7280' stroke-width='1.5' fill='none' stroke-linecap='round'/%3E%3C/svg%3E");
    background-repeat: no-repeat;
    background-position: right 14px center;
    cursor: pointer;
  }

  select:focus {
    outline: none;
    border-color: var(--azul-mid);
  }

  /* INPUT NUMBER */
  input[type="number"] {
    width: 100%;
    padding: 12px 14px;
    border-radius: 10px;
    border: 1.5px solid var(--borde);
    font-size: 14px;
    font-family: 'Inter', sans-serif;
    color: var(--texto);
    background: var(--blanco);
  }

  input[type="number"]:focus {
    outline: none;
    border-color: var(--azul-mid);
  }

  /* SUBMIT */
  .submit-wrap {
    text-align: center;
    margin-top: 36px;
  }

  .btn-submit {
    background: linear-gradient(135deg, var(--azul) 0%, var(--azul-mid) 100%);
    color: var(--blanco);
    border: none;
    padding: 16px 48px;
    font-size: 15px;
    font-weight: 600;
    font-family: 'Inter', sans-serif;
    border-radius: 50px;
    cursor: pointer;
    letter-spacing: 0.5px;
    box-shadow: 0 4px 18px rgba(27,58,107,0.35);
    transition: transform 0.15s ease, box-shadow 0.15s ease;
  }

  .btn-submit:hover {
    transform: translateY(-2px);
    box-shadow: 0 6px 24px rgba(27,58,107,0.45);
  }

  /* SUCCESS */
  .success-screen {
    display: none;
    text-align: center;
    padding: 60px 24px;
    max-width: 480px;
    margin: 0 auto;
  }

  .success-icon {
    font-size: 56px;
    margin-bottom: 20px;
  }

  .success-screen h2 {
    font-family: 'DM Serif Display', serif;
    font-size: 28px;
    color: var(--azul);
    margin-bottom: 12px;
  }

  .success-screen p {
    font-size: 15px;
    color: var(--suave);
    line-height: 1.7;
  }

  /* ERROR MSG */
  .error-msg {
    display: none;
    color: var(--error);
    font-size: 12px;
    margin-top: 6px;
    font-weight: 500;
  }

  .field-error input,
  .field-error select {
    border-color: var(--error) !important;
  }

  /* DIVIDER */
  .divider {
    height: 1px;
    background: var(--borde);
    margin: 8px 0 24px;
  }

  /* PROGRESS */
  .progress-bar {
    height: 3px;
    background: var(--borde);
    position: sticky;
    top: 0;
    z-index: 10;
  }

  .progress-fill {
    height: 100%;
    background: var(--oro);
    width: 0%;
    transition: width 0.4s ease;
  }
</style>
</head>
<body>

<div class="progress-bar"><div class="progress-fill" id="progressFill"></div></div>

<div class="header">
  <div class="header-eyebrow">Proyecto de Investigación Estudiantil</div>
  <h1>Motivación y Toma de Decisiones</h1>
  <p class="header-sub">Teoría de Motivación Temporal · Piers Steel</p>
</div>

<div class="container">

  <div class="intro-card">
    Este formulario es parte de un proyecto de investigación estudiantil sobre motivación y toma de decisiones. Tu participación es voluntaria y anónima.<br><br>
    No hay respuestas correctas ni incorrectas, pero sí se requiere honestidad. Responder sin reflexionar afecta la validez del estudio. Tómate un momento antes de contestar cada situación.<br><br>
    <strong>Gracias por tu seriedad.</strong>
  </div>

  <form id="encuesta" novalidate>

    <!-- SECCIÓN 1: DATOS -->
    <div class="section-label">Sección 1 — Datos generales</div>
    <div class="card">

      <div class="pregunta" id="field-edad">
        <div class="pregunta-label">¿Cuántos años tienes?</div>
        <input type="number" id="edad" name="edad" min="11" max="20" placeholder="Ej. 15">
        <div class="error-msg" id="err-edad">Por favor ingresa tu edad.</div>
      </div>

      <div class="divider"></div>

      <div class="pregunta" id="field-grado">
        <div class="pregunta-label">¿En qué año escolar estás actualmente?</div>
        <select id="grado" name="grado">
          <option value="">— Selecciona tu año —</option>
          <option value="7">7° año</option>
          <option value="8">8° año</option>
          <option value="9">9° año</option>
          <option value="10">10° año</option>
          <option value="11">11° año</option>
        </select>
        <div class="error-msg" id="err-grado">Por favor selecciona tu año escolar.</div>
      </div>

    </div>

    <!-- INSTRUCCIONES -->
    <div class="section-label">Instrucciones</div>
    <div class="card" style="font-size:14px; line-height:1.7; color:#374151;">
      Lee cada situación con atención e imagina que <strong>realmente te está ocurriendo</strong>. Responde según lo que genuinamente harías o sentirías en cada caso.
    </div>

    <!-- CASO 1 -->
    <div class="section-label">Caso 1 — Situación Académica</div>
    <div class="card">
      <div class="caso-header">
        <div>
          <div class="caso-badge">Académico · Individual</div>
          <div class="caso-title" style="margin-top:8px;">Ensayo de Español</div>
          <div class="caso-delay">⏱ Plazo: 14 días</div>
        </div>
      </div>

      <div class="escenario">
        "Tu profesor de Español te asignó un ensayo individual sobre un tema social que tú mismo debes elegir. Debe tener mínimo cuatro páginas, incluir fuentes bibliográficas y entregarse en dos semanas. Vale el 20% de tu nota del primer período."
      </div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">E</span> Expectativa</div>
        <div class="pregunta-hint">¿Qué tan seguro/a te sientes de poder escribir y entregar este ensayo satisfactoriamente?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c1e" name="c1e" min="0" max="10" value="5" oninput="updateVal('c1e-val', this.value); updateProgress()">
            <span class="scale-value" id="c1e-val">5</span>
          </div>
          <div class="scale-labels"><span>0 · Nada seguro/a</span><span>10 · Completamente seguro/a</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">V</span> Valor</div>
        <div class="pregunta-hint">¿Qué tan importante te parece esta tarea para ti personalmente?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c1v" name="c1v" min="1" max="10" value="5" oninput="updateVal('c1v-val', this.value); updateProgress()">
            <span class="scale-value" id="c1v-val">5</span>
          </div>
          <div class="scale-labels"><span>1 · Sin importancia</span><span>10 · Extremadamente importante</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta" id="field-c1i">
        <div class="pregunta-label"><span class="var-tag">I</span> Impulsividad</div>
        <div class="pregunta-hint">Durante estas dos semanas, ¿con qué frecuencia crees que pospondrías trabajar en el ensayo?</div>
        <div class="radio-group" id="rg-c1i">
          <label class="radio-option"><input type="radio" name="c1i" value="0.5" onchange="selectRadio(this); updateProgress()"> Casi nunca lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c1i" value="1.0" onchange="selectRadio(this); updateProgress()"> A veces lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c1i" value="1.5" onchange="selectRadio(this); updateProgress()"> Frecuentemente lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c1i" value="2.0" onchange="selectRadio(this); updateProgress()"> Casi siempre lo pospondría</label>
        </div>
        <div class="error-msg" id="err-c1i">Por favor selecciona una opción.</div>
      </div>
    </div>

    <!-- CASO 2 -->
    <div class="section-label">Caso 2 — Situación Académica</div>
    <div class="card">
      <div class="caso-header">
        <div>
          <div class="caso-badge verde">Académico · Grupal</div>
          <div class="caso-title" style="margin-top:8px;">Presentación de Ciencias</div>
          <div class="caso-delay">⏱ Plazo: 7 días</div>
        </div>
      </div>

      <div class="escenario">
        "En la clase de Ciencias tu profesor formó grupos de cuatro personas al azar. Deben preparar una presentación multimedia de 20 minutos sobre el cambio climático y sus efectos locales. Tienen una semana. La nota es grupal, pero el profesor también evaluará tu participación individual durante la exposición. Vale el 10% de tu nota del primer período."
      </div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">E</span> Expectativa</div>
        <div class="pregunta-hint">¿Qué tan seguro/a te sientes de que tu grupo logrará preparar y presentar bien este trabajo?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c2e" name="c2e" min="0" max="10" value="5" oninput="updateVal('c2e-val', this.value); updateProgress()">
            <span class="scale-value" id="c2e-val">5</span>
          </div>
          <div class="scale-labels"><span>0 · Nada seguro/a</span><span>10 · Completamente seguro/a</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">V</span> Valor</div>
        <div class="pregunta-hint">¿Qué tan importante te parece el resultado de esta presentación para ti?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c2v" name="c2v" min="1" max="10" value="5" oninput="updateVal('c2v-val', this.value); updateProgress()">
            <span class="scale-value" id="c2v-val">5</span>
          </div>
          <div class="scale-labels"><span>1 · Sin importancia</span><span>10 · Extremadamente importante</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta" id="field-c2i">
        <div class="pregunta-label"><span class="var-tag">I</span> Impulsividad</div>
        <div class="pregunta-hint">Durante esa semana, ¿con qué frecuencia crees que evitarías coordinarte con tu grupo o avanzar en tu parte?</div>
        <div class="radio-group" id="rg-c2i">
          <label class="radio-option"><input type="radio" name="c2i" value="0.5" onchange="selectRadio(this); updateProgress()"> Casi nunca lo evitaría</label>
          <label class="radio-option"><input type="radio" name="c2i" value="1.0" onchange="selectRadio(this); updateProgress()"> A veces lo evitaría</label>
          <label class="radio-option"><input type="radio" name="c2i" value="1.5" onchange="selectRadio(this); updateProgress()"> Frecuentemente lo evitaría</label>
          <label class="radio-option"><input type="radio" name="c2i" value="2.0" onchange="selectRadio(this); updateProgress()"> Casi siempre lo evitaría</label>
        </div>
        <div class="error-msg" id="err-c2i">Por favor selecciona una opción.</div>
      </div>
    </div>

    <!-- CASO 3 -->
    <div class="section-label">Caso 3 — Situación Cotidiana</div>
    <div class="card">
      <div class="caso-header">
        <div>
          <div class="caso-badge oro">Cotidiano · Doméstico</div>
          <div class="caso-title" style="margin-top:8px;">Responsabilidad en el hogar</div>
          <div class="caso-delay">⏱ Plazo: 3 días</div>
        </div>
      </div>

      <div class="escenario">
        "Tu mamá, papá o encargado te pidió que antes del fin de semana organices y limpies el espacio de la casa que te corresponde. No hay consecuencias graves si no lo haces, pero sí generaría una discusión familiar. Tienes tres días para hacerlo en el momento que quieras."
      </div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">E</span> Expectativa</div>
        <div class="pregunta-hint">¿Qué tan seguro/a te sientes de poder completar esta tarea antes del plazo?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c3e" name="c3e" min="0" max="10" value="5" oninput="updateVal('c3e-val', this.value); updateProgress()">
            <span class="scale-value" id="c3e-val">5</span>
          </div>
          <div class="scale-labels"><span>0 · Nada seguro/a</span><span>10 · Completamente seguro/a</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta">
        <div class="pregunta-label"><span class="var-tag">V</span> Valor</div>
        <div class="pregunta-hint">¿Qué tan importante te parece cumplir con esta responsabilidad?</div>
        <div class="scale-wrap">
          <div class="scale-row">
            <input type="range" id="c3v" name="c3v" min="1" max="10" value="5" oninput="updateVal('c3v-val', this.value); updateProgress()">
            <span class="scale-value" id="c3v-val">5</span>
          </div>
          <div class="scale-labels"><span>1 · Sin importancia</span><span>10 · Extremadamente importante</span></div>
        </div>
      </div>

      <div class="divider"></div>

      <div class="pregunta" id="field-c3i">
        <div class="pregunta-label"><span class="var-tag">I</span> Impulsividad</div>
        <div class="pregunta-hint">Durante esos tres días, ¿con qué frecuencia crees que pospondrías hacerlo por descansar, usar el celular u otras actividades?</div>
        <div class="radio-group" id="rg-c3i">
          <label class="radio-option"><input type="radio" name="c3i" value="0.5" onchange="selectRadio(this); updateProgress()"> Casi nunca lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c3i" value="1.0" onchange="selectRadio(this); updateProgress()"> A veces lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c3i" value="1.5" onchange="selectRadio(this); updateProgress()"> Frecuentemente lo pospondría</label>
          <label class="radio-option"><input type="radio" name="c3i" value="2.0" onchange="selectRadio(this); updat
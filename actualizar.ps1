Write-Host "===================================================" -ForegroundColor Cyan
Write-Host "  ACTUALIZANDO PORTAL DE DESCARGAS DE ALUMNOS" -ForegroundColor Cyan
Write-Host "===================================================" -ForegroundColor Cyan

Write-Host "`n[1/3] Escaneando carpetas de cursos..." -ForegroundColor Yellow
$cursos = @('5B','7A', '7B', '8A', '8B')
$resultado = @{}

foreach ($c in $cursos) {
    $ruta = Join-Path 'archivos' $c
    if (Test-Path $ruta) {
        $archivos = @(Get-ChildItem -Path $ruta -File | Where-Object { -not $_.Name.StartsWith('.') } | Select-Object -ExpandProperty Name)
        $resultado[$c] = $archivos
    } else {
        $resultado[$c] = @()
    }
}

$salida = @{
    actualizado = (Get-Date -Format 'dd/MM/yyyy HH:mm')
    cursos = $resultado
}

$salida | ConvertTo-Json -Depth 3 | Set-Content -Path 'archivos.json' -Encoding UTF8

Write-Host "[2/3] Preparando cambios en Git..." -ForegroundColor Yellow
git add .
git commit -m "Actualizacion automatica de trabajos"

Write-Host "[3/3] Subiendo a GitHub Pages..." -ForegroundColor Yellow
git push -u origin main

Write-Host "`n===================================================" -ForegroundColor Green
Write-Host "  LISTO! Los archivos estaran en linea en 30 seg." -ForegroundColor Green
Write-Host "===================================================" -ForegroundColor Green
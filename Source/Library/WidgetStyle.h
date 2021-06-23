#pragma once

#define BackgroundColor(Color) QString("background-color:"##Color";")
#define Border(BorderSize, BorderColor, Radius) QString("border:"##BorderSize"px solid "##BorderColor"; border-radius:"##Radius"px;")


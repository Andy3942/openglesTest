attribute vec4 vPosition;
// attribute vec4 source_color;

// varying vec4 destination_color;

void main(void)
{
    // destination_color = source_color;
    gl_Position = vPosition;
}
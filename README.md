### No Frills Text Editor

The purpose of No Frills Text Editor is, as the name suggests, to
be a simple GUI text editor. It doesn't have anywhere near the
capabilities of most others, but it's simple enough to modify
to meet (very specific) needs.

I wrote it because I wanted to learn Qt programming, and thought
it would be a good exercise.

![screenshot](https://github.com/scovetta/NoFrillsTextEditor/blob/master/doc/screenshot.png)

### Building

To build the project, you must first have Qt 5 installed. Then run:

    qmake NoFrillsTextEditor.pro
    make

The final executable will be in `build/release`.

### Running

Just start `build/release/NoFrillsTextEditor`.

### Using

The program functions like any ordinary text editor. Ctrl-Scroll changes the font size, and window state is automatically saved and restored.

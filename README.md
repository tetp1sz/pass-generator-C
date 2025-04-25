<h1>PASS-GEN-C</h1>
<div align="center">
    <img src="src/img/screenshot.png" alt="screenshot" title="screenshot">
</div>
<ul>
    <li><b>main.c</b> - it defines user input and an infinite loop</li>
    <li><b>pass_gen.c</b> - it defines functions for password generation</li>
    <li><b>pass_gen.h</b> - is reserved for declaring functions, constants, and some technical details</li>
</ul>
<h1>pass_gen.c</h1>
An array <code>ALPHABET</code> is defined, containing all the necessary characters: uppercase and lowercase Latin letters, numbers and special characters.

The function <code>generate_pass()</code> is defined, which, using <code>rand()</code> and the array <code>ALPHABET</code>, generates a password of a given length. Returns a string - the finished password.

<code>generate_pass()</code> function prototype:
<code>char *generate_pass(uint8_t pass_length);</code>
<hr>
<h1>pass_gen.h</h1>
It defines the following constants:
<ul>
	<li><b>TRUE</b> - denotes truth (i.e. 1)</li>
	<li><b>PASS_LENGTH</b> - the default password length (as recommended, the value is set to 12)</li>
<ul>

At the same time, <code>stdint.h</code> is included in the header file, since all files use the types that this file defines.
<hr>

Stack used:
<div align="center">
	<img src="https://github.com/devicons/devicon/blob/master/icons/git/git-original.svg" alt="Git" title="Git" width="40" height="40"/>&nbsp;
	<img src="https://github.com/devicons/devicon/blob/master/icons/vscode/vscode-original.svg" alt="VSCode" title="VSCode" width="40" height="40"/>&nbsp;
	<img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" alt="C" title="C" width="40" height="40"/>&nbsp;
	<img src="https://github.com/devicons/devicon/blob/master/icons/gcc/gcc-original.svg" alt="GCC" title="GCC" width="40" height="40"/>&nbsp;
</div>
<hr>
<h3>My contacts</h3>
<ul>
    <li><img src="https://img.icons8.com/color/512/discord-logo.png" width="20" height="20"> Discord: tetp1sz</li>
    <li><img src="https://upload.wikimedia.org/wikipedia/commons/5/5c/Telegram_Messenger.png" width="20" height="20"> Telegram: @tetp1sz</li>
</ul>

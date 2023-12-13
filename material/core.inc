{### DOCUMENTATION HEADER
/**md 
{% import 'core.inc' as core %}
# Core Macros
## Importing the Core Macros
In order to utilize the core macros in your project, include them at the top of the page like so:
```
{% raw %}
{% import 'core.inc' as core %}
{% endraw %}
```
Then you can call any method defined in the core macros via {% raw %}`{{ core.{MACRO_NAME_HERE}() }}`{% endraw %}

These core macros are meant to simplify using Material Markdown features into reusable functions that can be utilized via the macro plugin and with Jinja.
**/
#}






{# 
/**md
## Macro that retrieves the 'sudo info' Block
**/

{% macro create_sudo_admonition(type='info') %}
{{ create_admonition(type='info', description='*When installing/configuring the server as the root user- which <b>IS NOT</b> recommended- you can omit the `sudo` command from each step that uses it.*

    *It is recommended to setup a user with the proper sudo permissions instead of using the root account per best practices.*') }}
{% endmacro %}#}
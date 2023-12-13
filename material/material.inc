{### MATERIAL DOCUMENTATION
/**md file=index.md
# Material Macros for MkDocs
## Importing the Macros
In order to utilize the material macros in your project, include it at the top of the page like so:
```
{% raw %}
{% import 'material.inc' as material %}
{% endraw %}
```
Then you can call the a macro in your template via 
```
{% raw %}{{ material.{ macro }(... param1, param2, ...) }}{% endraw %}
```
These macros are meant to simplify using the Material theme into a reusable function calls that can be utilized with Jinja.

## Macros
1. [admonition](admonition.md)
**/ 
#}

{### ADMONITION DOCUMENTATION
/**md file=admonition.md
{% import 'material.inc' as material %}
# Admonitions
## Importing the Admonition Macro
In order to utilize the admonition macro in your project, include the material partial at the top of the page like so:
```
{% raw %}
{% import 'material.inc' as material %}
{% endraw %}
```
Then you can call the admonition macro via 
```
{% raw %}{{ material.admonition(... param1, param2, ...) }}{% endraw %}
```
You can also import just the macro directly like so:
```
{% raw %}
{% from 'material.inc' import admonition %}
{% endraw %}
```
Then call it like so:
```
{% raw %}{{ admonition(... param1, param2, ...) }}{% endraw %}
```

This admonition macro is meant to simplify using the Material Admonition into a reusable function that can be utilized via the macro plugin and with Jinja.

## admonition(params)
You can easily create an admonition in your template programmatically by calling the `admonition` Macro.

### Parameters
There are 5 parameters available to the macro:

1. type (String) - The type of admonition to create. If not provided, it defaults to `note`. Please refer to the [material documentation](https://squidfunk.github.io/mkdocs-material/reference/admonitions/){:target=blank} for all possible options (and how to configure custom types)
2. title (String) - The title to display for the admonition. If none is provided, the title won't display. If an empty string is passed (and collapsible=false) then the title and icon will be omitted entirely.
3. collapsible (boolean) - Is the admonition collapsible? If true, makes it collapsible, if false, it is not. Defaults to false.
4. startCollapsed (boolean) - Only will effect things if collapsible is set to true. If this value is true, the admonition will start collapsed, otherwise it wont be. The default is false, ie, start opened.
5. inlineRTL (boolean) - Allows for enabling inline admonitions. 
    1. By default, this is unset- meaning admonitions by default are not inline. 
    2. If set to false, then it will generate an inline admonition that pulls to the left. 
    3. Any other value will resolve to true and create an inline admonition that pulls to the right.
### Examples
#### Ex. 1 - Hello World
For Example:
```
{% raw %}
{% import 'material.inc' as material %}
{{ material.admonition(description='Hello World!') }}
{% endraw %}
```
Would create the following admonition in markdown:
{{ material.admonition(description='Hello World!') }}
#### Ex. 2 - An Empty Title
Creating one with an empty title is as simple as the following:
```
{% raw %}
{% import 'material.inc' as material %}
{{ material.admonition(title="",description='Hello World!') }}
{% endraw %}
```
Would result in:
{{ material.admonition(title="",description='Hello World!') }}
#### Ex. 3 - A collapsible Admonition
Creating a collapsible admonition and changing it's type to info with a title is as simple as the following:
```
{% raw %}
{% from 'material.inc' import admonition %}
{{ admonition(type='info',title='Collapsible Admonition',description='Hello World!',collapsible=true) }}
{% endraw %}
```
Would result in:
{{ material.admonition(type='info',title='Collapsible Admonition',description='Hello World!',collapsible=true) }}
#### Ex. 4 - A collapsed, collapsible Admonition
Changing it up further, we can remove the title and start it collapsed!
```
{% raw %}
{% from 'material.inc' import admonition %}
{{ admonition(type='tip',description='Hello World!',collapsible=true,startCollapsed=true) }}
{% endraw %}
```
Would result in:
{{ material.admonition(type='tip',description='Hello World!',collapsible=true,startCollapsed=true) }}
#### Ex. 5 - A right, inline, Admonition
Let's Go With Inline, RTL, Not collapsible and with the 'success' Type:
```
{% raw %}
{% import 'material.inc' as material %}
{{ material.admonition(type='success',description='Hello World!',inlineRTL=true) }}
{% endraw %}
```
Would result in:
{{ material.admonition(type='success',description='Hello World!',inlineRTL=true) }}

This Shows off what the RTL inline admonition can do!

It Floats all the way to the right of the content!
<br/><br/>

#### Ex. 6 - A left, inline, Admonition
Let's Go With Inline, RTL=false (on the left), Not collapsible and with the 'warning' Type:
```
{% raw %}
{% import 'material.inc' as material %}
{{ material.admonition(type='warning',description='Hello World!',inlineRTL=false) }}
{% endraw %}
```
Would result in:
{{ material.admonition(type='warning',description='Hello World!',inlineRTL=false) }}

This Shows off what the RTL inline admonition can do!

It Floats all the way to the Left of the content!
**/ 
#}
{### START_MACRO ###}
{% macro admonition(title=None, type='note', description='Insert Description Here', collapsible=false, startCollapsed=false,inlineRTL=None) %}
{%- if collapsible != false -%}???{%- if startCollapsed == false %}+{%- endif -%}{%- else -%}!!!{%- endif -%} {{ type }}{%- if inlineRTL != None %} inline{% if inlineRTL != false %} end{% endif -%}{% endif -%}{% if title != None %} {{ title }}{% endif %}{% if title == "" %} ""{% endif %}

    {{ description }}
{% endmacro %}
{### END_MACRO ###}
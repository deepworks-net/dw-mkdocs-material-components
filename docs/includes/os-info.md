

{% macro get_os_block(type='TIP',title='This is my title',description='Insert Description Here') %}
{{ get_block(type=type, title=title, description=description) }}
{% endmacro %}

{#  
   Include All OS Info Macros{% import 'os/almalinux/almalinux.md' as almalinux %}
#}
{# 
    AlmaLinux Support for AlmaLinux 8.7{% import 'almalinux.md' as almalinux %}
#}

{# 
    CentOS Support for CentOS 7.9, 8.5, and Stream{% import 'centos.md' as centos  %}
#}

{# 
    Oracle Support for Oracle 8.7{% import 'oracle.md' as oracle %}
#}

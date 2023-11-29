{#
    Macro that retrieves the 'OS' Block
    TODO: Document
#}
{% macro get_os_block(type='TIP',title='This is my title',description='Insert Description Here') %}
??? {{ type }} "{{ title }}"

    {{ description }}
{% endmacro %}

{#
    Macro that retrieves the 'sudo info' Block
#}
{% macro get_sudo_info() %}
??? INFO 

    *When installing/configuring the server as the root user- which <b>IS NOT</b> recommended- you can omit the `sudo` command from each step that uses it.*

    *It is recommended to setup a user with the proper sudo permissions instead of using the root account per best practices.*
{% endmacro %}

{#  
   Import All OS Info Macros
#}
{# 
    AlmaLinux Support for AlmaLinux 8.7
#}
{% import 'almalinux.md' %}
{# 
    CentOS Support for CentOS 7.9, 8.5, and Stream
#}
{% import 'centos.md' %}
{# 
    Oracle Support for Oracle 8.7
#}
{% import 'centos.md' %}
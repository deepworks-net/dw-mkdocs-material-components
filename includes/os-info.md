{% macro get_os_block(type='TIP',title='This is my title',description='Insert Description Here') %}
??? {{ type }} "{{ title }}"

    {{ description }}
{% endmacro %}

{% macro get_os_oracle_8() %}{{ get_os_block('TIP','Oracle 8.7 - Production Ready','Oracle 8 is currently supported through July 1, 2029 and is an open-source, binary clone of RedHat. This distribution is one of the spiritual successors to CentOS 8.') }}{% endmacro %}

{% macro get_os_almalinux_8() %}{{ get_os_block('TIP','AlmaLinux 8.7 - Production Ready','AlmaLinux 8 is currently supported through March 1, 2029 and is an open-source, binary clone of RedHat. This distribution is one of the spiritual successors to CentOS 8.') }}{% endmacro %}

{% macro get_os_centos_7() %}{{ get_os_block('WARNING','CentOS 7.9 - Approaching EOL','On June 30, 2024, CentOS 7 will reach \'End of Life\', meaning it will be no longer supported. **DO NOT** use this distribution in production for any new machines! Begin retiring and rebuilding those that utilize it.') }}{% endmacro %}

{% macro get_os_centos_8() %}{{ get_os_block('DANGER','CentOS 8.5 - Past EOL - Not For Production','As of December 31, 2021, CentOS 8 reached \'End of Life\', meaning it is no longer supported. **DO NOT** use this distribution in production!') }}{% endmacro %}

{% macro get_os_centos_stream() %}{{ get_os_block('WARNING','CentOS Stream - Upstream os - Not For Production','CentOS Stream is the current continuation of CentOS 8 that is supported by RedHat. The Stream version is not suitable for production as it is an upstream branch. This means it gets fixes before RedHat, which may not be ready for \'prime time\' as it were. **DO NOT** use this distribution in production!') }}{% endmacro %}

{% macro get_sudo_info() %}
??? INFO 

    *When installing/configuring the server as the root user- which <b>IS NOT</b> recommended- you can omit the `sudo` command from each step that uses it.*

    *It is recommended to setup a user with the proper sudo permissions instead of using the root account per best practices.*
{% endmacro %}
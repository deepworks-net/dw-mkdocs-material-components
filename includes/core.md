{#
    Macro that retrieves an Admonition
    TODO: Document
#}
{% macro create_admonition(type='TIP',title='This is my title',description='Insert Description Here') %}
??? {{ type }} "{{ title }}"

    {{ description }}
{% endmacro %}
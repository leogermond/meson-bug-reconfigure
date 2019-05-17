project('hello', 'c')

cfgd = configuration_data()
cfgd.set('PRINT', get_option('print'))

configure_file(
    input: 'config.h.in',
    output: '@BASENAME@',
    configuration: cfgd)

test('hello', executable('hello', files('main.c')))

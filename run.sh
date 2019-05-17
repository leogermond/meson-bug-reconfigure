while rm -rf build && \
      meson build && \
      meson configure build -Dprint=good && \
      meson test -C build --verbose
do \
      true
done

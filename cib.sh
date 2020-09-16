~/github/cib/builds/cib -m CibPoDoFo -b cib/ -i cibification/src/ -o exp/                    \
--always-use-unique-namespace true                                                        \
-A PODOFO_DEPRECATED                                                                      \
-A PODOFO_API                                                                             \
-A PODOFO_DOC_API                                                                         \
-M PODOFO_RAISE_LOGIC_IF                                                                  \
-I PODOFO_LOCAL                                                                           \
-I PDF_SIZE_FORMAT                                                                        


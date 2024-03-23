#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonMapper)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::IO {
class TextReader;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace ThirdParty::Json::LitJson {
struct ArrayMetadata;
}
namespace ThirdParty::Json::LitJson {
template <typename T> class ExporterFunc_1;
}
namespace ThirdParty::Json::LitJson {
class ExporterFunc;
}
namespace ThirdParty::Json::LitJson {
class IJsonWrapper;
}
namespace ThirdParty::Json::LitJson {
template <typename TJson, typename TValue> class ImporterFunc_2;
}
namespace ThirdParty::Json::LitJson {
class ImporterFunc;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
namespace ThirdParty::Json::LitJson {
class JsonReader;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
namespace ThirdParty::Json::LitJson {
struct ObjectMetadata;
}
namespace ThirdParty::Json::LitJson {
struct PropertyMetadata;
}
namespace ThirdParty::Json::LitJson {
class WrapperFactory;
}
namespace ThirdParty::Json::LitJson {
class __JsonMapper____c;
}
namespace ThirdParty::Json::LitJson {
template <typename T> class __JsonMapper____c__DisplayClass39_0_1;
}
namespace ThirdParty::Json::LitJson {
template <typename TJson, typename TValue> class __JsonMapper____c__DisplayClass40_0_2;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonMapper;
}
namespace ThirdParty::Json::LitJson {
class __JsonMapper____c;
}
namespace ThirdParty::Json::LitJson {
template <typename T> class __JsonMapper____c__DisplayClass39_0_1;
}
namespace ThirdParty::Json::LitJson {
template <typename TJson, typename TValue> class __JsonMapper____c__DisplayClass40_0_2;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonMapper);
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::__JsonMapper____c);
MARK_GEN_REF_PTR_T(::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass39_0_1);
MARK_GEN_REF_PTR_T(::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass40_0_2);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::JsonMapper::<>c*
class CORDL_TYPE __JsonMapper____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ThirdParty::Json::LitJson::__JsonMapper____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_0;

  /// @brief Field <>9__25_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_1, put = setStaticF___9__25_1))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_1;

  /// @brief Field <>9__25_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_10, put = setStaticF___9__25_10))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_10;

  /// @brief Field <>9__25_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_2, put = setStaticF___9__25_2))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_2;

  /// @brief Field <>9__25_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_3, put = setStaticF___9__25_3))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_3;

  /// @brief Field <>9__25_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_4, put = setStaticF___9__25_4))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_4;

  /// @brief Field <>9__25_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_5, put = setStaticF___9__25_5))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_5;

  /// @brief Field <>9__25_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_6, put = setStaticF___9__25_6))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_6;

  /// @brief Field <>9__25_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_7, put = setStaticF___9__25_7))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_7;

  /// @brief Field <>9__25_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_8, put = setStaticF___9__25_8))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_8;

  /// @brief Field <>9__25_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_9, put = setStaticF___9__25_9))::ThirdParty::Json::LitJson::ExporterFunc* __9__25_9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_1;

  /// @brief Field <>9__26_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_10, put = setStaticF___9__26_10))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_10;

  /// @brief Field <>9__26_11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_11, put = setStaticF___9__26_11))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_11;

  /// @brief Field <>9__26_12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_12, put = setStaticF___9__26_12))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_12;

  /// @brief Field <>9__26_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_13, put = setStaticF___9__26_13))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_13;

  /// @brief Field <>9__26_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_2, put = setStaticF___9__26_2))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_2;

  /// @brief Field <>9__26_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_3, put = setStaticF___9__26_3))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_3;

  /// @brief Field <>9__26_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_4, put = setStaticF___9__26_4))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_4;

  /// @brief Field <>9__26_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_5, put = setStaticF___9__26_5))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_5;

  /// @brief Field <>9__26_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_6, put = setStaticF___9__26_6))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_6;

  /// @brief Field <>9__26_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_7, put = setStaticF___9__26_7))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_7;

  /// @brief Field <>9__26_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_8, put = setStaticF___9__26_8))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_8;

  /// @brief Field <>9__26_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_9, put = setStaticF___9__26_9))::ThirdParty::Json::LitJson::ImporterFunc* __9__26_9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0))::ThirdParty::Json::LitJson::WrapperFactory* __9__31_0;

  /// @brief Field <>9__32_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__32_0, put = setStaticF___9__32_0))::ThirdParty::Json::LitJson::WrapperFactory* __9__32_0;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0))::ThirdParty::Json::LitJson::WrapperFactory* __9__33_0;

  static inline ::ThirdParty::Json::LitJson::__JsonMapper____c* New_ctor();

  /// @brief Method <RegisterBaseExporters>b__25_0, addr 0x14ae934, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_0(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_1, addr 0x14ae9e8, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_1(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_10, addr 0x14af0dc, size 0xb0, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_10(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_2, addr 0x14aea9c, size 0xec, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_2(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_3, addr 0x14aeb88, size 0x7c, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_3(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_4, addr 0x14aece0, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_4(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_5, addr 0x14aed94, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_5(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_6, addr 0x14aee48, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_6(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_7, addr 0x14aeefc, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_7(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_8, addr 0x14aefb0, size 0x7c, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_8(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseExporters>b__25_9, addr 0x14af02c, size 0xb0, virtual false, abstract: false, final false
  inline void _RegisterBaseExporters_b__25_9(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method <RegisterBaseImporters>b__26_0, addr 0x14af18c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_0(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_1, addr 0x14af25c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_1(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_10, addr 0x14af9cc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_10(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_11, addr 0x14afa9c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_11(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_12, addr 0x14afb60, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_12(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_13, addr 0x14afc5c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_13(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_2, addr 0x14af32c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_2(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_3, addr 0x14af3fc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_3(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_4, addr 0x14af4cc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_4(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_5, addr 0x14af59c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_5(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_6, addr 0x14af66c, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_6(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_7, addr 0x14af738, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_7(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_8, addr 0x14af804, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_8(::System::Object* input);

  /// @brief Method <RegisterBaseImporters>b__26_9, addr 0x14af8fc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterBaseImporters_b__26_9(::System::Object* input);

  /// @brief Method <ToObject>b__31_0, addr 0x14afd2c, size 0x5c, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::IJsonWrapper* _ToObject_b__31_0();

  /// @brief Method <ToObject>b__32_0, addr 0x14afd88, size 0x5c, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::IJsonWrapper* _ToObject_b__32_0();

  /// @brief Method <ToObject>b__33_0, addr 0x14afde4, size 0x5c, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::IJsonWrapper* _ToObject_b__33_0();

  /// @brief Method .ctor, addr 0x14ae92c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ThirdParty::Json::LitJson::__JsonMapper____c* getStaticF___9();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_0();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_1();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_10();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_2();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_3();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_4();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_5();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_6();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_7();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_8();

  static inline ::ThirdParty::Json::LitJson::ExporterFunc* getStaticF___9__25_9();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_0();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_1();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_10();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_11();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_12();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_13();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_2();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_3();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_4();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_5();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_6();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_7();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_8();

  static inline ::ThirdParty::Json::LitJson::ImporterFunc* getStaticF___9__26_9();

  static inline ::ThirdParty::Json::LitJson::WrapperFactory* getStaticF___9__31_0();

  static inline ::ThirdParty::Json::LitJson::WrapperFactory* getStaticF___9__32_0();

  static inline ::ThirdParty::Json::LitJson::WrapperFactory* getStaticF___9__33_0();

  static inline void setStaticF___9(::ThirdParty::Json::LitJson::__JsonMapper____c* value);

  static inline void setStaticF___9__25_0(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_1(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_10(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_2(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_3(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_4(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_5(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_6(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_7(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_8(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__25_9(::ThirdParty::Json::LitJson::ExporterFunc* value);

  static inline void setStaticF___9__26_0(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_1(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_10(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_11(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_12(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_13(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_2(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_3(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_4(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_5(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_6(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_7(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_8(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__26_9(::ThirdParty::Json::LitJson::ImporterFunc* value);

  static inline void setStaticF___9__31_0(::ThirdParty::Json::LitJson::WrapperFactory* value);

  static inline void setStaticF___9__32_0(::ThirdParty::Json::LitJson::WrapperFactory* value);

  static inline void setStaticF___9__33_0(::ThirdParty::Json::LitJson::WrapperFactory* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonMapper____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonMapper____c(__JsonMapper____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonMapper____c(__JsonMapper____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::__JsonMapper____c, 0x10>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
// Type: ::<>c__DisplayClass39_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::JsonMapper::<>c__DisplayClass39_0`1<T>*
class CORDL_TYPE __JsonMapper____c__DisplayClass39_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field exporter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_exporter, put = __cordl_internal_set_exporter))::ThirdParty::Json::LitJson::ExporterFunc_1<T>* exporter;

  static inline ::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass39_0_1<T>* New_ctor();

  /// @brief Method <RegisterExporter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterExporter_b__0(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  constexpr ::ThirdParty::Json::LitJson::ExporterFunc_1<T>*& __cordl_internal_get_exporter();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::ExporterFunc_1<T>*> const& __cordl_internal_get_exporter() const;

  constexpr void __cordl_internal_set_exporter(::ThirdParty::Json::LitJson::ExporterFunc_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonMapper____c__DisplayClass39_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c__DisplayClass39_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonMapper____c__DisplayClass39_0_1(__JsonMapper____c__DisplayClass39_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c__DisplayClass39_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonMapper____c__DisplayClass39_0_1(__JsonMapper____c__DisplayClass39_0_1 const&) = delete;

  /// @brief Field exporter, offset: 0x10, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::ExporterFunc_1<T>* ___exporter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ThirdParty::Json::LitJson
// Type: ::<>c__DisplayClass40_0`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// cpp template
template <typename TJson, typename TValue>
// Is value type: false
// CS Name: ::JsonMapper::<>c__DisplayClass40_0`2<TJson,TValue>*
class CORDL_TYPE __JsonMapper____c__DisplayClass40_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field importer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_importer, put = __cordl_internal_set_importer))::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* importer;

  static inline ::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass40_0_2<TJson, TValue>* New_ctor();

  /// @brief Method <RegisterImporter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterImporter_b__0(::System::Object* input);

  constexpr ::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*& __cordl_internal_get_importer();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>*> const& __cordl_internal_get_importer() const;

  constexpr void __cordl_internal_set_importer(::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonMapper____c__DisplayClass40_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c__DisplayClass40_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonMapper____c__DisplayClass40_0_2(__JsonMapper____c__DisplayClass40_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonMapper____c__DisplayClass40_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonMapper____c__DisplayClass40_0_2(__JsonMapper____c__DisplayClass40_0_2 const&) = delete;

  /// @brief Field importer, offset: 0x10, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* ___importer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ThirdParty::Json::LitJson
// Type: ThirdParty.Json.LitJson::JsonMapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonMapper*
class CORDL_TYPE JsonMapper : public ::System::Object {
public:
  // Declarations
  using __c = ::ThirdParty::Json::LitJson::__JsonMapper____c;

  template <typename T> using __c__DisplayClass39_0_1 = ::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass39_0_1<T>;

  template <typename TJson, typename TValue> using __c__DisplayClass40_0_2 = ::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass40_0_2<TJson, TValue>;

  /// @brief Field array_metadata, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_array_metadata,
                             put = setStaticF_array_metadata))::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ArrayMetadata>* array_metadata;

  /// @brief Field array_metadata_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_array_metadata_lock, put = setStaticF_array_metadata_lock))::System::Object* array_metadata_lock;

  /// @brief Field base_exporters_table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base_exporters_table,
                             put = setStaticF_base_exporters_table))::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* base_exporters_table;

  /// @brief Field base_importers_table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base_importers_table, put = setStaticF_base_importers_table))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>* base_importers_table;

  /// @brief Field conv_ops, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_conv_ops, put = setStaticF_conv_ops))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>* conv_ops;

  /// @brief Field conv_ops_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_conv_ops_lock, put = setStaticF_conv_ops_lock))::System::Object* conv_ops_lock;

  /// @brief Field custom_exporters_table, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_custom_exporters_table,
               put = setStaticF_custom_exporters_table))::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* custom_exporters_table;

  /// @brief Field custom_importers_table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_custom_importers_table, put = setStaticF_custom_importers_table))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>* custom_importers_table;

  /// @brief Field datetime_format, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_datetime_format, put = setStaticF_datetime_format))::System::IFormatProvider* datetime_format;

  /// @brief Field dictionary_properties_to_ignore, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dictionary_properties_to_ignore,
                             put = setStaticF_dictionary_properties_to_ignore))::System::Collections::Generic::HashSet_1<::StringW>* dictionary_properties_to_ignore;

  /// @brief Field max_nesting_depth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_max_nesting_depth, put = setStaticF_max_nesting_depth)) int32_t max_nesting_depth;

  /// @brief Field object_metadata, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_object_metadata,
                             put = setStaticF_object_metadata))::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ObjectMetadata>* object_metadata;

  /// @brief Field object_metadata_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_object_metadata_lock, put = setStaticF_object_metadata_lock))::System::Object* object_metadata_lock;

  /// @brief Field static_writer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_static_writer, put = setStaticF_static_writer))::ThirdParty::Json::LitJson::JsonWriter* static_writer;

  /// @brief Field static_writer_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_static_writer_lock, put = setStaticF_static_writer_lock))::System::Object* static_writer_lock;

  /// @brief Field type_properties, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_type_properties, put = setStaticF_type_properties))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::PropertyMetadata>*>* type_properties;

  /// @brief Field type_properties_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_type_properties_lock, put = setStaticF_type_properties_lock))::System::Object* type_properties_lock;

  /// @brief Method AddArrayMetadata, addr 0x14a791c, size 0x814, virtual false, abstract: false, final false
  static inline void AddArrayMetadata(::System::Type* type);

  /// @brief Method AddObjectMetadata, addr 0x14a8130, size 0xd9c, virtual false, abstract: false, final false
  static inline void AddObjectMetadata(::System::Type* type);

  /// @brief Method AddTypeProperties, addr 0x14a8ecc, size 0xae0, virtual false, abstract: false, final false
  static inline void AddTypeProperties(::System::Type* type);

  /// @brief Method GetConvOp, addr 0x14a99ac, size 0x930, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetConvOp(::System::Type* t1, ::System::Type* t2);

  static inline ::ThirdParty::Json::LitJson::JsonMapper* New_ctor();

  /// @brief Method ReadValue, addr 0x14aa2dc, size 0x10c8, virtual false, abstract: false, final false
  static inline ::System::Object* ReadValue(::System::Type* inst_type, ::ThirdParty::Json::LitJson::JsonReader* reader);

  /// @brief Method ReadValue, addr 0x14abd9c, size 0x760, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::IJsonWrapper* ReadValue(::ThirdParty::Json::LitJson::WrapperFactory* factory, ::ThirdParty::Json::LitJson::JsonReader* reader);

  /// @brief Method RegisterBaseExporters, addr 0x14a5d88, size 0xe0c, virtual false, abstract: false, final false
  static inline void RegisterBaseExporters();

  /// @brief Method RegisterBaseImporters, addr 0x14a6b94, size 0xd88, virtual false, abstract: false, final false
  static inline void RegisterBaseImporters();

  /// @brief Method RegisterExporter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterExporter(::ThirdParty::Json::LitJson::ExporterFunc_1<T>* exporter);

  /// @brief Method RegisterImporter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TJson, typename TValue> static inline void RegisterImporter(::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* importer);

  /// @brief Method RegisterImporter, addr 0x14ac4fc, size 0x244, virtual false, abstract: false, final false
  static inline void
  RegisterImporter(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>* table,
                   ::System::Type* json_type, ::System::Type* value_type, ::ThirdParty::Json::LitJson::ImporterFunc* importer);

  /// @brief Method ToJson, addr 0x14aded8, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Object* obj);

  /// @brief Method ToJson, addr 0x14ae130, size 0x6c, virtual false, abstract: false, final false
  static inline void ToJson(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method ToObject, addr 0x14ae4d0, size 0x14c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* ToObject(::StringW json);

  /// @brief Method ToObject, addr 0x14ae34c, size 0x17c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* ToObject(::System::IO::TextReader* reader);

  /// @brief Method ToObject, addr 0x14ae19c, size 0x14c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonData* ToObject(::ThirdParty::Json::LitJson::JsonReader* reader);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToObject(::StringW json);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToObject(::System::IO::TextReader* reader);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToObject(::ThirdParty::Json::LitJson::JsonReader* reader);

  /// @brief Method ToWrapper, addr 0x14ae61c, size 0x94, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::IJsonWrapper* ToWrapper(::ThirdParty::Json::LitJson::WrapperFactory* factory, ::StringW json);

  /// @brief Method ToWrapper, addr 0x14ae2e8, size 0x64, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::IJsonWrapper* ToWrapper(::ThirdParty::Json::LitJson::WrapperFactory* factory, ::ThirdParty::Json::LitJson::JsonReader* reader);

  /// @brief Method UnregisterExporters, addr 0x14ae728, size 0xcc, virtual false, abstract: false, final false
  static inline void UnregisterExporters();

  /// @brief Method UnregisterImporters, addr 0x14ae7f4, size 0xcc, virtual false, abstract: false, final false
  static inline void UnregisterImporters();

  /// @brief Method ValidateRequiredFields, addr 0x14ab774, size 0x628, virtual false, abstract: false, final false
  static inline void ValidateRequiredFields(::System::Object* instance, ::System::Type* inst_type);

  /// @brief Method WriteValue, addr 0x14ac740, size 0x1798, virtual false, abstract: false, final false
  static inline void WriteValue(::System::Object* obj, ::ThirdParty::Json::LitJson::JsonWriter* writer, bool writer_is_private, int32_t depth);

  /// @brief Method .ctor, addr 0x14ae8c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ArrayMetadata>* getStaticF_array_metadata();

  static inline ::System::Object* getStaticF_array_metadata_lock();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* getStaticF_base_exporters_table();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>*
  getStaticF_base_importers_table();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>*
  getStaticF_conv_ops();

  static inline ::System::Object* getStaticF_conv_ops_lock();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* getStaticF_custom_exporters_table();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>*
  getStaticF_custom_importers_table();

  static inline ::System::IFormatProvider* getStaticF_datetime_format();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_dictionary_properties_to_ignore();

  static inline int32_t getStaticF_max_nesting_depth();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ObjectMetadata>* getStaticF_object_metadata();

  static inline ::System::Object* getStaticF_object_metadata_lock();

  static inline ::ThirdParty::Json::LitJson::JsonWriter* getStaticF_static_writer();

  static inline ::System::Object* getStaticF_static_writer_lock();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::PropertyMetadata>*>* getStaticF_type_properties();

  static inline ::System::Object* getStaticF_type_properties_lock();

  static inline void setStaticF_array_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ArrayMetadata>* value);

  static inline void setStaticF_array_metadata_lock(::System::Object* value);

  static inline void setStaticF_base_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* value);

  static inline void setStaticF_base_importers_table(
      ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>* value);

  static inline void
  setStaticF_conv_ops(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>* value);

  static inline void setStaticF_conv_ops_lock(::System::Object* value);

  static inline void setStaticF_custom_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ExporterFunc*>* value);

  static inline void setStaticF_custom_importers_table(
      ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ImporterFunc*>*>* value);

  static inline void setStaticF_datetime_format(::System::IFormatProvider* value);

  static inline void setStaticF_dictionary_properties_to_ignore(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline void setStaticF_max_nesting_depth(int32_t value);

  static inline void setStaticF_object_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*, ::ThirdParty::Json::LitJson::ObjectMetadata>* value);

  static inline void setStaticF_object_metadata_lock(::System::Object* value);

  static inline void setStaticF_static_writer(::ThirdParty::Json::LitJson::JsonWriter* value);

  static inline void setStaticF_static_writer_lock(::System::Object* value);

  static inline void
  setStaticF_type_properties(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::ThirdParty::Json::LitJson::PropertyMetadata>*>* value);

  static inline void setStaticF_type_properties_lock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonMapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonMapper(JsonMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonMapper(JsonMapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonMapper, 0x10>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonMapper);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonMapper*, "ThirdParty.Json.LitJson", "JsonMapper");
NEED_NO_BOX(::ThirdParty::Json::LitJson::__JsonMapper____c);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::__JsonMapper____c*, "ThirdParty.Json.LitJson", "JsonMapper/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass39_0_1, "ThirdParty.Json.LitJson", "JsonMapper/<>c__DisplayClass39_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ThirdParty::Json::LitJson::__JsonMapper____c__DisplayClass40_0_2, "ThirdParty.Json.LitJson", "JsonMapper/<>c__DisplayClass40_0`2");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonObject)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Unity::Services::Vivox::Mint::Http {
class DeserializationSettings;
}
namespace Unity::Services::Vivox::Mint::Http {
class IDeserializable;
}
namespace Unity::Services::Vivox::Mint::Http {
class __JsonObject____c;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class JsonObject;
}
namespace Unity::Services::Vivox::Mint::Http {
class __JsonObject____c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::JsonObject);
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::__JsonObject____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::JsonObject::<>c*
class CORDL_TYPE __JsonObject____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Vivox::Mint::Http::__JsonObject____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0,
                             put = setStaticF___9__7_0))::System::Func_2<::System::Collections::Generic::List_1<::System::Object*>*,
                                                                         ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* __9__7_1;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::StringW>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__8_1,
      put = setStaticF___9__8_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* __9__8_1;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__9_0,
               put = setStaticF___9__9_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>, ::StringW>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_1,
                             put = setStaticF___9__9_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>,
                                                                         ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>* __9__9_1;

  static inline ::Unity::Services::Vivox::Mint::Http::__JsonObject____c* New_ctor();

  /// @brief Method <GetNewJsonObjectResponse>b__6_0, addr 0x17055d8, size 0x64, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Http::IDeserializable* _GetNewJsonObjectResponse_b__6_0(::System::Object* v);

  /// @brief Method <GetNewJsonObjectResponse>b__7_0, addr 0x170563c, size 0x114, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>* _GetNewJsonObjectResponse_b__7_0(::System::Collections::Generic::List_1<::System::Object*>* l);

  /// @brief Method <GetNewJsonObjectResponse>b__7_1, addr 0x1705750, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Http::IDeserializable* _GetNewJsonObjectResponse_b__7_1(::System::Object* v);

  /// @brief Method <GetNewJsonObjectResponse>b__8_0, addr 0x17057c0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetNewJsonObjectResponse_b__8_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> kv);

  /// @brief Method <GetNewJsonObjectResponse>b__8_1, addr 0x17057fc, size 0x70, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::Mint::Http::IDeserializable* _GetNewJsonObjectResponse_b__8_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*> kv);

  /// @brief Method <GetNewJsonObjectResponse>b__9_0, addr 0x170586c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetNewJsonObjectResponse_b__9_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*> kv);

  /// @brief Method <GetNewJsonObjectResponse>b__9_1, addr 0x17058a8, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*
  _GetNewJsonObjectResponse_b__9_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*> kv);

  /// @brief Method .ctor, addr 0x17055d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Vivox::Mint::Http::__JsonObject____c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* getStaticF___9__6_0();

  static inline ::System::Func_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>*
  getStaticF___9__7_0();

  static inline ::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* getStaticF___9__7_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::StringW>* getStaticF___9__8_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* getStaticF___9__8_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>, ::StringW>* getStaticF___9__9_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>,
                                 ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>*
  getStaticF___9__9_1();

  static inline void setStaticF___9(::Unity::Services::Vivox::Mint::Http::__JsonObject____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* value);

  static inline void setStaticF___9__7_0(
      ::System::Func_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::System::Object*, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::StringW>* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Object*>, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>, ::StringW>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>,
                                                          ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonObject____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonObject____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonObject____c(__JsonObject____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonObject____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonObject____c(__JsonObject____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__JsonObject____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: Unity.Services.Vivox.Mint.Http::JsonObject
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::JsonObject*
class CORDL_TYPE JsonObject : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Services::Vivox::Mint::Http::__JsonObject____c;

  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::System::Object* obj;

  /// @brief Convert operator to "::Unity::Services::Vivox::Mint::Http::IDeserializable"
  constexpr operator ::Unity::Services::Vivox::Mint::Http::IDeserializable*() noexcept;

  /// @brief Method GetAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetAs();

  /// @brief Method GetAs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T GetAs(::Unity::Services::Vivox::Mint::Http::DeserializationSettings* deserializationSettings);

  /// @brief Method GetAsString, addr 0x1704db4, size 0x1c4, virtual true, abstract: false, final true
  inline ::StringW GetAsString();

  /// @brief Method GetNewJsonObjectResponse, addr 0x17053d0, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>*
  GetNewJsonObjectResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Object*>*>* o);

  /// @brief Method GetNewJsonObjectResponse, addr 0x1705234, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Unity::Services::Vivox::Mint::Http::IDeserializable*>*
  GetNewJsonObjectResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* o);

  /// @brief Method GetNewJsonObjectResponse, addr 0x1705108, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>*>*
  GetNewJsonObjectResponse(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* o);

  /// @brief Method GetNewJsonObjectResponse, addr 0x1704fdc, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Unity::Services::Vivox::Mint::Http::IDeserializable*>* GetNewJsonObjectResponse(::System::Collections::Generic::List_1<::System::Object*>* o);

  /// @brief Method GetNewJsonObjectResponse, addr 0x1704f78, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Http::IDeserializable* GetNewJsonObjectResponse(::System::Object* o);

  static inline ::Unity::Services::Vivox::Mint::Http::JsonObject* New_ctor(::System::Object* obj);

  constexpr ::System::Object*& __cordl_internal_get_obj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_obj() const;

  constexpr void __cordl_internal_set_obj(::System::Object* value);

  /// @brief Method .ctor, addr 0x1704d8c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Convert to "::Unity::Services::Vivox::Mint::Http::IDeserializable"
  constexpr ::Unity::Services::Vivox::Mint::Http::IDeserializable* i___Unity__Services__Vivox__Mint__Http__IDeserializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObject(JsonObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObject(JsonObject const&) = delete;

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::JsonObject, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::JsonObject, ___obj) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::JsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::JsonObject*, "Unity.Services.Vivox.Mint.Http", "JsonObject");
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::__JsonObject____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__JsonObject____c*, "Unity.Services.Vivox.Mint.Http", "JsonObject/<>c");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CredentialProfilePropertyMapping)
namespace Amazon::Runtime::CredentialManagement::Internal {
class __CredentialProfilePropertyMapping____c;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileOptions;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
class CredentialProfilePropertyMapping;
}
namespace Amazon::Runtime::CredentialManagement::Internal {
class __CredentialProfilePropertyMapping____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping);
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::CredentialProfilePropertyMapping::<>c*
class CORDL_TYPE __CredentialProfilePropertyMapping____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::System::Reflection::PropertyInfo*, ::StringW>* __9__10_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::StringW, bool>* __9__4_0;

  static inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c* New_ctor();

  /// @brief Method <Convert>b__10_0, addr 0x2032444, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _Convert_b__10_0(::System::Reflection::PropertyInfo* p);

  /// @brief Method <.cctor>b__11_0, addr 0x2032464, size 0x20, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__11_0(::System::Reflection::PropertyInfo* p);

  /// @brief Method <.ctor>b__4_0, addr 0x2032424, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__4_0(::StringW v);

  /// @brief Method .ctor, addr 0x203241c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::PropertyInfo*, ::StringW>* getStaticF___9__10_0();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__4_0();

  static inline void setStaticF___9(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Reflection::PropertyInfo*, ::StringW>* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CredentialProfilePropertyMapping____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfilePropertyMapping____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CredentialProfilePropertyMapping____c(__CredentialProfilePropertyMapping____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfilePropertyMapping____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CredentialProfilePropertyMapping____c(__CredentialProfilePropertyMapping____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
// Type: Amazon.Runtime.CredentialManagement.Internal::CredentialProfilePropertyMapping
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::CredentialProfilePropertyMapping*
class CORDL_TYPE CredentialProfilePropertyMapping : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c;

  /// @brief Field CredentialProfileReflectionProperties, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_CredentialProfileReflectionProperties,
      put = setStaticF_CredentialProfileReflectionProperties))::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> CredentialProfileReflectionProperties;

  /// @brief Field TypePropertySet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypePropertySet, put = setStaticF_TypePropertySet))::System::Collections::Generic::HashSet_1<::StringW>* TypePropertySet;

  /// @brief Field _mappedNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mappedNames, put = __cordl_internal_set__mappedNames))::System::Collections::Generic::HashSet_1<::StringW>* _mappedNames;

  /// @brief Field _nameMapping, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nameMapping, put = __cordl_internal_set__nameMapping))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _nameMapping;

  /// @brief Method CombineProfileParts, addr 0x202dbe8, size 0x3dc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CombineProfileParts(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions,
                                                                                                 ::System::Collections::Generic::HashSet_1<::StringW>* reservedPropertyNames,
                                                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* reservedProperties,
                                                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* userProperties);

  /// @brief Method Convert, addr 0x2031e58, size 0x338, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Convert(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions);

  /// @brief Method ExtractProfileParts, addr 0x202d604, size 0x3dc, virtual false, abstract: false, final false
  inline void ExtractProfileParts(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* profileDictionary, ::System::Collections::Generic::HashSet_1<::StringW>* reservedKeys,
                                  ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*> profileOptions,
                                  ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> reservedProperties,
                                  ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> userProperties);

  /// @brief Method ExtractProfileParts, addr 0x203182c, size 0x1c, virtual false, abstract: false, final false
  inline void ExtractProfileParts(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* profileDictionary, ::System::Collections::Generic::HashSet_1<::StringW>* reservedKeys,
                                  ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*> profileOptions,
                                  ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> userProperties);

  static inline ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* nameMapping);

  /// @brief Method ValidateNoProfileOptionsProperties, addr 0x2031848, size 0x280, virtual false, abstract: false, final false
  inline void ValidateNoProfileOptionsProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* userProperties);

  /// @brief Method ValidateNoReservedProperties, addr 0x2031ac8, size 0x390, virtual false, abstract: false, final false
  static inline void ValidateNoReservedProperties(::System::Collections::Generic::HashSet_1<::StringW>* reservedPropertyNames,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* userProperties);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__mappedNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__mappedNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__nameMapping();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__nameMapping() const;

  constexpr void __cordl_internal_set__mappedNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__nameMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x202e760, size 0x344, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* nameMapping);

  static inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> getStaticF_CredentialProfileReflectionProperties();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_TypePropertySet();

  static inline void setStaticF_CredentialProfileReflectionProperties(::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> value);

  static inline void setStaticF_TypePropertySet(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfilePropertyMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfilePropertyMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfilePropertyMapping(CredentialProfilePropertyMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfilePropertyMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfilePropertyMapping(CredentialProfilePropertyMapping const&) = delete;

  /// @brief Field _nameMapping, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____nameMapping;

  /// @brief Field _mappedNames, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____mappedNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping, ____nameMapping) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping, ____mappedNames) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping*, "Amazon.Runtime.CredentialManagement.Internal", "CredentialProfilePropertyMapping");
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::__CredentialProfilePropertyMapping____c*, "Amazon.Runtime.CredentialManagement.Internal",
                       "CredentialProfilePropertyMapping/<>c");

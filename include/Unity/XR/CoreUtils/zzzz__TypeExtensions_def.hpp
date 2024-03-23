#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace Unity::XR::CoreUtils {
class __TypeExtensions____c__DisplayClass2_0;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TypeExtensions;
}
namespace Unity::XR::CoreUtils {
class __TypeExtensions____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::TypeExtensions);
MARK_REF_PTR_T(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::TypeExtensions::<>c__DisplayClass2_0*
class CORDL_TYPE __TypeExtensions____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list))::System::Collections::Generic::List_1<::System::Type*>* list;

  /// @brief Field predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate))::System::Func_2<::System::Type*, bool>* predicate;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  static inline ::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0* New_ctor();

  /// @brief Method <GetAssignableTypes>b__0, addr 0x2877254, size 0x10c, virtual false, abstract: false, final false
  inline void _GetAssignableTypes_b__0(::System::Type* t);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __cordl_internal_get_list() const;

  constexpr ::System::Func_2<::System::Type*, bool>*& __cordl_internal_get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Type*, bool>*> const& __cordl_internal_get_predicate() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<::System::Type*, bool>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x28754d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeExtensions____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeExtensions____c__DisplayClass2_0(__TypeExtensions____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeExtensions____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeExtensions____c__DisplayClass2_0(__TypeExtensions____c__DisplayClass2_0 const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Type*, bool>* ___predicate;

  /// @brief Field list, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0, ___predicate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0, ___list) == 0x20, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
// Type: Unity.XR.CoreUtils::TypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::TypeExtensions*
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0;

  /// @brief Field k_Fields, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Fields, put = setStaticF_k_Fields))::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* k_Fields;

  /// @brief Field k_TypeNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TypeNames, put = setStaticF_k_TypeNames))::System::Collections::Generic::List_1<::StringW>* k_TypeNames;

  /// @brief Method GetAssignableTypes, addr 0x2875418, size 0xc0, virtual false, abstract: false, final false
  static inline void GetAssignableTypes(::System::Type* type, ::System::Collections::Generic::List_1<::System::Type*>* list, ::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAttribute> static inline TAttribute GetAttribute(::System::Type* type, bool inherit);

  /// @brief Method GetExtensionsOfClass, addr 0x2875710, size 0x84, virtual false, abstract: false, final false
  static inline void GetExtensionsOfClass(::System::Type* type, ::System::Collections::Generic::List_1<::System::Type*>* list);

  /// @brief Method GetFieldInTypeOrBaseType, addr 0x2876620, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Reflection::FieldInfo* GetFieldInTypeOrBaseType(::System::Type* type, ::StringW fieldName);

  /// @brief Method GetFieldRecursively, addr 0x2875a28, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Reflection::FieldInfo* GetFieldRecursively(::System::Type* type, ::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFieldsRecursively, addr 0x2875b40, size 0x16c, virtual false, abstract: false, final false
  static inline void GetFieldsRecursively(::System::Type* type, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* fields, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFullNameWithGenericArguments, addr 0x2876d18, size 0x2f8, virtual false, abstract: false, final false
  static inline ::StringW GetFullNameWithGenericArguments(::System::Type* type);

  /// @brief Method GetFullNameWithGenericArgumentsInternal, addr 0x2876b14, size 0x204, virtual false, abstract: false, final false
  static inline ::StringW GetFullNameWithGenericArgumentsInternal(::System::Type* type);

  /// @brief Method GetGenericInterfaces, addr 0x2875794, size 0x184, virtual false, abstract: false, final false
  static inline void GetGenericInterfaces(::System::Type* type, ::System::Type* genericInterface, ::System::Collections::Generic::List_1<::System::Type*>* interfaces);

  /// @brief Method GetImplementationsOfInterface, addr 0x287568c, size 0x84, virtual false, abstract: false, final false
  static inline void GetImplementationsOfInterface(::System::Type* type, ::System::Collections::Generic::List_1<::System::Type*>* list);

  /// @brief Method GetInterfaceFieldsFromClasses, addr 0x2875e18, size 0x808, virtual false, abstract: false, final false
  static inline void GetInterfaceFieldsFromClasses(::System::Collections::Generic::IEnumerable_1<::System::Type*>* classes,
                                                   ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* fields,
                                                   ::System::Collections::Generic::List_1<::System::Type*>* interfaceTypes, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodRecursively, addr 0x287706c, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetMethodRecursively(::System::Type* type, ::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNameWithFullGenericArguments, addr 0x2876900, size 0x214, virtual false, abstract: false, final false
  static inline ::StringW GetNameWithFullGenericArguments(::System::Type* type);

  /// @brief Method GetNameWithGenericArguments, addr 0x28766ec, size 0x214, virtual false, abstract: false, final false
  static inline ::StringW GetNameWithGenericArguments(::System::Type* type);

  /// @brief Method GetPropertiesRecursively, addr 0x2875cac, size 0x16c, virtual false, abstract: false, final false
  static inline void GetPropertiesRecursively(::System::Type* type, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* fields,
                                              ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertyRecursively, addr 0x2875918, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetPropertyRecursively(::System::Type* type, ::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method IsAssignableFromOrSubclassOf, addr 0x2877010, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsAssignableFromOrSubclassOf(::System::Type* checkType, ::System::Type* baseType);

  /// @brief Method IsDefinedGetInheritedTypes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAttribute> static inline void IsDefinedGetInheritedTypes(::System::Type* type, ::System::Collections::Generic::List_1<::System::Type*>* types);

  static inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* getStaticF_k_Fields();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_k_TypeNames();

  static inline void setStaticF_k_Fields(::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* value);

  static inline void setStaticF_k_TypeNames(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions(TypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions(TypeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::TypeExtensions*, "Unity.XR.CoreUtils", "TypeExtensions");
NEED_NO_BOX(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::__TypeExtensions____c__DisplayClass2_0*, "Unity.XR.CoreUtils", "TypeExtensions/<>c__DisplayClass2_0");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PaginatedResourceFactory)
namespace Amazon::Util {
template <typename U> class Marker_1;
}
namespace Amazon::Util {
class PaginatedResourceInfo;
}
namespace Amazon::Util {
template <typename U> class PaginatedResource_1;
}
namespace Amazon::Util {
template <typename ItemType, typename TRequestType, typename TResponseType> class __PaginatedResourceFactory____c__DisplayClass1_0_3;
}
namespace Amazon::Util {
template <typename ItemType, typename TRequestType, typename TResponseType> class __PaginatedResourceFactory____c__DisplayClass2_0_3;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util {
class PaginatedResourceFactory;
}
namespace Amazon::Util {
template <typename ItemType, typename TRequestType, typename TResponseType> class __PaginatedResourceFactory____c__DisplayClass1_0_3;
}
namespace Amazon::Util {
template <typename ItemType, typename TRequestType, typename TResponseType> class __PaginatedResourceFactory____c__DisplayClass2_0_3;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::PaginatedResourceFactory);
MARK_GEN_REF_PTR_T(::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3);
MARK_GEN_REF_PTR_T(::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3);
// Type: ::<>c__DisplayClass1_0`3
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename ItemType, typename TRequestType, typename TResponseType>
// Is value type: false
// CS Name: ::PaginatedResourceFactory::<>c__DisplayClass1_0`3<ItemType,TRequestType,TResponseType>*
class CORDL_TYPE __PaginatedResourceFactory____c__DisplayClass1_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::System::Object* client;

  /// @brief Field fetcherMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fetcherMethod, put = __cordl_internal_set_fetcherMethod))::System::Reflection::MethodInfo* fetcherMethod;

  static inline ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>* New_ctor();

  /// @brief Method <Create>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResponseType _Create_b__0(TRequestType req);

  constexpr ::System::Object*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_client() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_fetcherMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_fetcherMethod() const;

  constexpr void __cordl_internal_set_client(::System::Object* value);

  constexpr void __cordl_internal_set_fetcherMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PaginatedResourceFactory____c__DisplayClass1_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResourceFactory____c__DisplayClass1_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PaginatedResourceFactory____c__DisplayClass1_0_3(__PaginatedResourceFactory____c__DisplayClass1_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResourceFactory____c__DisplayClass1_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PaginatedResourceFactory____c__DisplayClass1_0_3(__PaginatedResourceFactory____c__DisplayClass1_0_3 const&) = delete;

  /// @brief Field fetcherMethod, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___fetcherMethod;

  /// @brief Field client, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
// Type: ::<>c__DisplayClass2_0`3
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename ItemType, typename TRequestType, typename TResponseType>
// Is value type: false
// CS Name: ::PaginatedResourceFactory::<>c__DisplayClass2_0`3<ItemType,TRequestType,TResponseType>*
class CORDL_TYPE __PaginatedResourceFactory____c__DisplayClass2_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call))::System::Func_2<TRequestType, TResponseType>* call;

  /// @brief Field itemListPropertyPath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_itemListPropertyPath, put = __cordl_internal_set_itemListPropertyPath))::StringW itemListPropertyPath;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) TRequestType request;

  /// @brief Field tokenRequestPropertyPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenRequestPropertyPath, put = __cordl_internal_set_tokenRequestPropertyPath))::StringW tokenRequestPropertyPath;

  /// @brief Field tokenResponsePropertyPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenResponsePropertyPath, put = __cordl_internal_set_tokenResponsePropertyPath))::StringW tokenResponsePropertyPath;

  static inline ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>* New_ctor();

  /// @brief Method <Create>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Util::Marker_1<ItemType>* _Create_b__0(::StringW token);

  constexpr ::System::Func_2<TRequestType, TResponseType>*& __cordl_internal_get_call();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TRequestType, TResponseType>*> const& __cordl_internal_get_call() const;

  constexpr ::StringW const& __cordl_internal_get_itemListPropertyPath() const;

  constexpr ::StringW& __cordl_internal_get_itemListPropertyPath();

  constexpr TRequestType const& __cordl_internal_get_request() const;

  constexpr TRequestType& __cordl_internal_get_request();

  constexpr ::StringW const& __cordl_internal_get_tokenRequestPropertyPath() const;

  constexpr ::StringW& __cordl_internal_get_tokenRequestPropertyPath();

  constexpr ::StringW const& __cordl_internal_get_tokenResponsePropertyPath() const;

  constexpr ::StringW& __cordl_internal_get_tokenResponsePropertyPath();

  constexpr void __cordl_internal_set_call(::System::Func_2<TRequestType, TResponseType>* value);

  constexpr void __cordl_internal_set_itemListPropertyPath(::StringW value);

  constexpr void __cordl_internal_set_request(TRequestType value);

  constexpr void __cordl_internal_set_tokenRequestPropertyPath(::StringW value);

  constexpr void __cordl_internal_set_tokenResponsePropertyPath(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PaginatedResourceFactory____c__DisplayClass2_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResourceFactory____c__DisplayClass2_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PaginatedResourceFactory____c__DisplayClass2_0_3(__PaginatedResourceFactory____c__DisplayClass2_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PaginatedResourceFactory____c__DisplayClass2_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PaginatedResourceFactory____c__DisplayClass2_0_3(__PaginatedResourceFactory____c__DisplayClass2_0_3 const&) = delete;

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  TRequestType ___request;

  /// @brief Field tokenRequestPropertyPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___tokenRequestPropertyPath;

  /// @brief Field call, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<TRequestType, TResponseType>* ___call;

  /// @brief Field tokenResponsePropertyPath, offset: 0x28, size: 0x8, def value: None
  ::StringW ___tokenResponsePropertyPath;

  /// @brief Field itemListPropertyPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ___itemListPropertyPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
// Type: Amazon.Util::PaginatedResourceFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::PaginatedResourceFactory*
class CORDL_TYPE PaginatedResourceFactory : public ::System::Object {
public:
  // Declarations
  template <typename ItemType, typename TRequestType, typename TResponseType>
  using __c__DisplayClass1_0_3 = ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3<ItemType, TRequestType, TResponseType>;

  template <typename ItemType, typename TRequestType, typename TResponseType>
  using __c__DisplayClass2_0_3 = ::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3<ItemType, TRequestType, TResponseType>;

  /// @brief Method Cast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Cast(::System::Object* o);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ItemType, typename TRequestType, typename TResponseType>
  static inline ::Amazon::Util::PaginatedResource_1<ItemType>* Create(::System::Func_2<TRequestType, TResponseType>* call, TRequestType request, ::StringW tokenRequestPropertyPath,
                                                                      ::StringW tokenResponsePropertyPath, ::StringW itemListPropertyPath);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ItemType, typename TRequestType, typename TResponseType>
  static inline ::Amazon::Util::PaginatedResource_1<ItemType>* Create(::System::Object* client, ::StringW methodName, ::System::Object* request, ::StringW tokenRequestPropertyPath,
                                                                      ::StringW tokenResponsePropertyPath, ::StringW itemListPropertyPath);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemType, typename TRequestType, typename TResponseType> static inline ::System::Object* Create(::Amazon::Util::PaginatedResourceInfo* pri);

  /// @brief Method GetFuncType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::System::Type* GetFuncType();

  /// @brief Method GetPropertyTypeFromPath, addr 0x220a2f4, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Type* GetPropertyTypeFromPath(::System::Type* start, ::StringW path);

  /// @brief Method GetPropertyValueFromPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetPropertyValueFromPath(::System::Object* instance, ::StringW path);

  /// @brief Method SetPropertyValueAtPath, addr 0x220a060, size 0x294, virtual false, abstract: false, final false
  static inline void SetPropertyValueAtPath(::System::Object* instance, ::StringW path, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginatedResourceFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResourceFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginatedResourceFactory(PaginatedResourceFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResourceFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginatedResourceFactory(PaginatedResourceFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::PaginatedResourceFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::PaginatedResourceFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::PaginatedResourceFactory*, "Amazon.Util", "PaginatedResourceFactory");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass1_0_3, "Amazon.Util", "PaginatedResourceFactory/<>c__DisplayClass1_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::__PaginatedResourceFactory____c__DisplayClass2_0_3, "Amazon.Util", "PaginatedResourceFactory/<>c__DisplayClass2_0`3");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PaginatedResourceInfo)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util {
class PaginatedResourceInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::PaginatedResourceInfo);
// Type: Amazon.Util::PaginatedResourceInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::PaginatedResourceInfo*
class CORDL_TYPE PaginatedResourceInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Client, put = set_Client))::System::Object* Client;

  __declspec(property(get = get_ItemListPropertyPath, put = set_ItemListPropertyPath))::StringW ItemListPropertyPath;

  __declspec(property(get = get_MethodName, put = set_MethodName))::StringW MethodName;

  __declspec(property(get = get_Request, put = set_Request))::System::Object* Request;

  __declspec(property(get = get_TokenRequestPropertyPath, put = set_TokenRequestPropertyPath))::StringW TokenRequestPropertyPath;

  __declspec(property(get = get_TokenResponsePropertyPath, put = set_TokenResponsePropertyPath))::StringW TokenResponsePropertyPath;

  /// @brief Field <Client>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Client_k__BackingField, put = __cordl_internal_set__Client_k__BackingField))::System::Object* _Client_k__BackingField;

  /// @brief Field <ItemListPropertyPath>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ItemListPropertyPath_k__BackingField,
                      put = __cordl_internal_set__ItemListPropertyPath_k__BackingField))::StringW _ItemListPropertyPath_k__BackingField;

  /// @brief Field <MethodName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__MethodName_k__BackingField, put = __cordl_internal_set__MethodName_k__BackingField))::StringW _MethodName_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::System::Object* _Request_k__BackingField;

  /// @brief Field tokenRequestPropertyPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenRequestPropertyPath, put = __cordl_internal_set_tokenRequestPropertyPath))::StringW tokenRequestPropertyPath;

  /// @brief Field tokenResponsePropertyPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenResponsePropertyPath, put = __cordl_internal_set_tokenResponsePropertyPath))::StringW tokenResponsePropertyPath;

  static inline ::Amazon::Util::PaginatedResourceInfo* New_ctor();

  /// @brief Method Verify, addr 0x220a8dc, size 0x504, virtual false, abstract: false, final false
  inline void Verify();

  /// @brief Method VerifyProperty, addr 0x220ade0, size 0x8, virtual false, abstract: false, final false
  static inline void VerifyProperty(::StringW propName, ::System::Type* start, ::StringW path, ::System::Type* expectedType);

  /// @brief Method VerifyProperty, addr 0x220ade8, size 0x274, virtual false, abstract: false, final false
  static inline void VerifyProperty(::StringW propName, ::System::Type* start, ::StringW path, ::System::Type* expectedType, bool skipTypecheck);

  /// @brief Method WithClient, addr 0x220a8ac, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithClient(::System::Object* client);

  /// @brief Method WithItemListPropertyPath, addr 0x220a8d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithItemListPropertyPath(::StringW itemListPropertyPath);

  /// @brief Method WithMethodName, addr 0x220a8b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithMethodName(::StringW methodName);

  /// @brief Method WithRequest, addr 0x220a8bc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithRequest(::System::Object* request);

  /// @brief Method WithTokenRequestPropertyPath, addr 0x220a8c4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithTokenRequestPropertyPath(::StringW tokenRequestPropertyPath);

  /// @brief Method WithTokenResponsePropertyPath, addr 0x220a8cc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::PaginatedResourceInfo* WithTokenResponsePropertyPath(::StringW tokenResponsePropertyPath);

  constexpr ::System::Object*& __cordl_internal_get__Client_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Client_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ItemListPropertyPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ItemListPropertyPath_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MethodName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MethodName_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get_tokenRequestPropertyPath() const;

  constexpr ::StringW& __cordl_internal_get_tokenRequestPropertyPath();

  constexpr ::StringW const& __cordl_internal_get_tokenResponsePropertyPath() const;

  constexpr ::StringW& __cordl_internal_get_tokenResponsePropertyPath();

  constexpr void __cordl_internal_set__Client_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__ItemListPropertyPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MethodName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_tokenRequestPropertyPath(::StringW value);

  constexpr void __cordl_internal_set_tokenResponsePropertyPath(::StringW value);

  /// @brief Method .ctor, addr 0x220b05c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Client, addr 0x220a488, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Client();

  /// @brief Method get_ItemListPropertyPath, addr 0x220a89c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ItemListPropertyPath();

  /// @brief Method get_MethodName, addr 0x220a498, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MethodName();

  /// @brief Method get_Request, addr 0x220a4a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Request();

  /// @brief Method get_TokenRequestPropertyPath, addr 0x220a4b8, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW get_TokenRequestPropertyPath();

  /// @brief Method get_TokenResponsePropertyPath, addr 0x220a51c, size 0x378, virtual false, abstract: false, final false
  inline ::StringW get_TokenResponsePropertyPath();

  /// @brief Method set_Client, addr 0x220a490, size 0x8, virtual false, abstract: false, final false
  inline void set_Client(::System::Object* value);

  /// @brief Method set_ItemListPropertyPath, addr 0x220a8a4, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemListPropertyPath(::StringW value);

  /// @brief Method set_MethodName, addr 0x220a4a0, size 0x8, virtual false, abstract: false, final false
  inline void set_MethodName(::StringW value);

  /// @brief Method set_Request, addr 0x220a4b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Request(::System::Object* value);

  /// @brief Method set_TokenRequestPropertyPath, addr 0x220a514, size 0x8, virtual false, abstract: false, final false
  inline void set_TokenRequestPropertyPath(::StringW value);

  /// @brief Method set_TokenResponsePropertyPath, addr 0x220a894, size 0x8, virtual false, abstract: false, final false
  inline void set_TokenResponsePropertyPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginatedResourceInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResourceInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginatedResourceInfo(PaginatedResourceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResourceInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginatedResourceInfo(PaginatedResourceInfo const&) = delete;

  /// @brief Field tokenRequestPropertyPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___tokenRequestPropertyPath;

  /// @brief Field tokenResponsePropertyPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___tokenResponsePropertyPath;

  /// @brief Field <Client>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____Client_k__BackingField;

  /// @brief Field <MethodName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____MethodName_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____Request_k__BackingField;

  /// @brief Field <ItemListPropertyPath>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____ItemListPropertyPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::PaginatedResourceInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ___tokenRequestPropertyPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ___tokenResponsePropertyPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ____Client_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ____MethodName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ____Request_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::PaginatedResourceInfo, ____ItemListPropertyPath_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::PaginatedResourceInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::PaginatedResourceInfo*, "Amazon.Util", "PaginatedResourceInfo");

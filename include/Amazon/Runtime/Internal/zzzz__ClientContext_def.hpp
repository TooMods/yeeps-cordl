#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientContext)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ClientContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ClientContext);
// Type: Amazon.Runtime.Internal::ClientContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ClientContext*
class CORDL_TYPE ClientContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AppID, put = set_AppID))::StringW AppID;

  /// @brief Field <AppID>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AppID_k__BackingField, put = __cordl_internal_set__AppID_k__BackingField))::StringW _AppID_k__BackingField;

  /// @brief Field _client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _client;

  /// @brief Field _clientContext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__clientContext, put = __cordl_internal_set__clientContext))::System::Collections::IDictionary* _clientContext;

  /// @brief Field _custom, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__custom, put = __cordl_internal_set__custom))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _custom;

  /// @brief Field _env, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__env, put = __cordl_internal_set__env))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _env;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field _services, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__services,
                      put = __cordl_internal_set__services))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>* _services;

  /// @brief Method AddCustomAttributes, addr 0x203469c, size 0x1dc, virtual false, abstract: false, final false
  inline void AddCustomAttributes(::StringW key, ::StringW value);

  static inline ::Amazon::Runtime::Internal::ClientContext* New_ctor();

  /// @brief Method ToJsonString, addr 0x2034878, size 0x5e4, virtual false, abstract: false, final false
  inline ::StringW ToJsonString();

  constexpr ::StringW const& __cordl_internal_get__AppID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AppID_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__client() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__clientContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__clientContext() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__custom();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__custom() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__env();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__env() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>*& __cordl_internal_get__services();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>*> const& __cordl_internal_get__services() const;

  constexpr void __cordl_internal_set__AppID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__client(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__clientContext(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__custom(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__env(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__services(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>* value);

  /// @brief Method .ctor, addr 0x2034e5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF__lock();

  /// @brief Method get_AppID, addr 0x203468c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppID();

  static inline void setStaticF__lock(::System::Object* value);

  /// @brief Method set_AppID, addr 0x2034694, size 0x8, virtual false, abstract: false, final false
  inline void set_AppID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientContext(ClientContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientContext(ClientContext const&) = delete;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____client;

  /// @brief Field _custom, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____custom;

  /// @brief Field _env, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____env;

  /// @brief Field _services, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Collections::IDictionary*>* ____services;

  /// @brief Field _clientContext, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____clientContext;

  /// @brief Field <AppID>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____AppID_k__BackingField;

  /// @brief Field APP_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString APP_ID_KEY{ u"APP_ID_KEY" };

  /// @brief Field CLIENT_APP_PACKAGE_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_APP_PACKAGE_NAME_KEY{ u"app_package_name" };

  /// @brief Field CLIENT_APP_TITLE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_APP_TITLE_KEY{ u"app_title" };

  /// @brief Field CLIENT_APP_VERSION_CODE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_APP_VERSION_CODE_KEY{ u"app_version_code" };

  /// @brief Field CLIENT_APP_VERSION_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_APP_VERSION_NAME_KEY{ u"app_version_name" };

  /// @brief Field CLIENT_ID_CACHE_FILENAME offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_ID_CACHE_FILENAME{ u"client-ID-cache" };

  /// @brief Field CLIENT_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_ID_KEY{ u"client_id" };

  /// @brief Field CLIENT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CLIENT_KEY{ u"client" };

  /// @brief Field CUSTOM_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CUSTOM_KEY{ u"custom" };

  /// @brief Field ENV_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_KEY{ u"env" };

  /// @brief Field ENV_LOCALE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_LOCALE_KEY{ u"locale" };

  /// @brief Field ENV_MAKE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_MAKE_KEY{ u"make" };

  /// @brief Field ENV_MODEL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_MODEL_KEY{ u"model" };

  /// @brief Field ENV_PLATFORM_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_PLATFORM_KEY{ u"platform" };

  /// @brief Field ENV_PLATFORM_VERSION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_PLATFORM_VERSION_KEY{ u"platform_version" };

  /// @brief Field SERVICES_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SERVICES_KEY{ u"services" };

  /// @brief Field SERVICE_MOBILE_ANALYTICS_APP_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SERVICE_MOBILE_ANALYTICS_APP_ID_KEY{ u"app_id" };

  /// @brief Field SERVICE_MOBILE_ANALYTICS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SERVICE_MOBILE_ANALYTICS_KEY{ u"mobile_analytics" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ClientContext, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____custom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____env) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____services) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____clientContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ClientContext, ____AppID_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ClientContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ClientContext*, "Amazon.Runtime.Internal", "ClientContext");

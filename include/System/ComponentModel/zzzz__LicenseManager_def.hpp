#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LicenseManager)
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class LicenseContext;
}
namespace System::ComponentModel {
class LicenseProvider;
}
namespace System::ComponentModel {
struct LicenseUsageMode;
}
namespace System::ComponentModel {
class License;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseManager;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::LicenseManager);
// Type: System.ComponentModel::LicenseManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::LicenseManager*
class CORDL_TYPE LicenseManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_context, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_context, put = setStaticF_s_context))::System::ComponentModel::LicenseContext* s_context;

  /// @brief Field s_contextLockHolder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_contextLockHolder, put = setStaticF_s_contextLockHolder))::System::Object* s_contextLockHolder;

  /// @brief Field s_internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_internalSyncObject, put = setStaticF_s_internalSyncObject))::System::Object* s_internalSyncObject;

  /// @brief Field s_providerInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_providerInstances, put = setStaticF_s_providerInstances))::System::Collections::Hashtable* s_providerInstances;

  /// @brief Field s_providers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_providers, put = setStaticF_s_providers))::System::Collections::Hashtable* s_providers;

  /// @brief Field s_selfLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_selfLock, put = setStaticF_s_selfLock))::System::Object* s_selfLock;

  /// @brief Method CacheProvider, addr 0x1afa6c0, size 0x1c0, virtual false, abstract: false, final false
  static inline void CacheProvider(::System::Type* type, ::System::ComponentModel::LicenseProvider* provider);

  /// @brief Method CreateWithContext, addr 0x1afa880, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Object* CreateWithContext(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext);

  /// @brief Method CreateWithContext, addr 0x1afa940, size 0x2d4, virtual false, abstract: false, final false
  static inline ::System::Object* CreateWithContext(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCachedNoLicenseProvider, addr 0x1afada4, size 0xb0, virtual false, abstract: false, final false
  static inline bool GetCachedNoLicenseProvider(::System::Type* type);

  /// @brief Method GetCachedProvider, addr 0x1afae54, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::LicenseProvider* GetCachedProvider(::System::Type* type);

  /// @brief Method GetCachedProviderInstance, addr 0x1afaf1c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::LicenseProvider* GetCachedProviderInstance(::System::Type* providerType);

  /// @brief Method IsLicensed, addr 0x1afafe4, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsLicensed(::System::Type* type);

  /// @brief Method IsValid, addr 0x1afb114, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsValid(::System::Type* type);

  /// @brief Method IsValid, addr 0x1afb1b4, size 0x70, virtual false, abstract: false, final false
  static inline bool IsValid(::System::Type* type, ::System::Object* instance, ByRef<::System::ComponentModel::License*> license);

  /// @brief Method LockContext, addr 0x1afac14, size 0x190, virtual false, abstract: false, final false
  static inline void LockContext(::System::Object* contextUser);

  static inline ::System::ComponentModel::LicenseManager* New_ctor();

  /// @brief Method UnlockContext, addr 0x1afb224, size 0x194, virtual false, abstract: false, final false
  static inline void UnlockContext(::System::Object* contextUser);

  /// @brief Method Validate, addr 0x1afb8a0, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::License* Validate(::System::Type* type, ::System::Object* instance);

  /// @brief Method Validate, addr 0x1afb7d4, size 0xcc, virtual false, abstract: false, final false
  static inline void Validate(::System::Type* type);

  /// @brief Method ValidateInternal, addr 0x1afb084, size 0x90, virtual false, abstract: false, final false
  static inline bool ValidateInternal(::System::Type* type, ::System::Object* instance, bool allowExceptions, ByRef<::System::ComponentModel::License*> license);

  /// @brief Method ValidateInternalRecursive, addr 0x1afb3b8, size 0x354, virtual false, abstract: false, final false
  static inline bool ValidateInternalRecursive(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::System::Object* instance, bool allowExceptions,
                                               ByRef<::System::ComponentModel::License*> license, ByRef<::StringW> licenseKey);

  /// @brief Method .ctor, addr 0x1afa2bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::LicenseContext* getStaticF_s_context();

  static inline ::System::Object* getStaticF_s_contextLockHolder();

  static inline ::System::Object* getStaticF_s_internalSyncObject();

  static inline ::System::Collections::Hashtable* getStaticF_s_providerInstances();

  static inline ::System::Collections::Hashtable* getStaticF_s_providers();

  static inline ::System::Object* getStaticF_s_selfLock();

  /// @brief Method get_CurrentContext, addr 0x1afa2c4, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::LicenseContext* get_CurrentContext();

  /// @brief Method get_UsageMode, addr 0x1afa61c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::LicenseUsageMode get_UsageMode();

  static inline void setStaticF_s_context(::System::ComponentModel::LicenseContext* value);

  static inline void setStaticF_s_contextLockHolder(::System::Object* value);

  static inline void setStaticF_s_internalSyncObject(::System::Object* value);

  static inline void setStaticF_s_providerInstances(::System::Collections::Hashtable* value);

  static inline void setStaticF_s_providers(::System::Collections::Hashtable* value);

  static inline void setStaticF_s_selfLock(::System::Object* value);

  /// @brief Method set_CurrentContext, addr 0x1afa488, size 0x194, virtual false, abstract: false, final false
  static inline void set_CurrentContext(::System::ComponentModel::LicenseContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicenseManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicenseManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicenseManager(LicenseManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicenseManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicenseManager(LicenseManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::LicenseManager, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::LicenseManager);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseManager*, "System.ComponentModel", "LicenseManager");

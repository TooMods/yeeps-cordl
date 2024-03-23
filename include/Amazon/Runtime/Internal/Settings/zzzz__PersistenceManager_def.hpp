#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PersistenceManager)
namespace Amazon::Runtime::Internal::Settings {
class IPersistenceManager;
}
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace Amazon::Runtime::Internal::Settings {
class SettingsWatcher;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class PersistenceManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::PersistenceManager);
// Type: Amazon.Runtime.Internal.Settings::PersistenceManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::PersistenceManager*
class CORDL_TYPE PersistenceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field ENCRYPTEDKEYS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ENCRYPTEDKEYS, put = setStaticF_ENCRYPTEDKEYS))::System::Collections::Generic::HashSet_1<::StringW>* ENCRYPTEDKEYS;

  /// @brief Field SettingsStoreFolder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SettingsStoreFolder, put = setStaticF_SettingsStoreFolder))::StringW SettingsStoreFolder;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField,
                             put = setStaticF__Instance_k__BackingField))::Amazon::Runtime::Internal::Settings::IPersistenceManager* _Instance_k__BackingField;

  /// @brief Field _logger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__logger, put = setStaticF__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _watchers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__watchers,
                      put = __cordl_internal_set__watchers))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>* _watchers;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
  constexpr operator ::Amazon::Runtime::Internal::Settings::IPersistenceManager*() noexcept;

  /// @brief Method DecryptAnyEncryptedValues, addr 0x2451fc4, size 0x658, virtual false, abstract: false, final false
  static inline void DecryptAnyEncryptedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* settings);

  /// @brief Method GetSetting, addr 0x245169c, size 0x60, virtual false, abstract: false, final false
  inline ::StringW GetSetting(::StringW key);

  /// @brief Method GetSettings, addr 0x2450c3c, size 0x4, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* GetSettings(::StringW type);

  /// @brief Method GetSettingsStoreFolder, addr 0x2451948, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetSettingsStoreFolder();

  /// @brief Method IsEncrypted, addr 0x2451ce0, size 0x80, virtual false, abstract: false, final false
  static inline bool IsEncrypted(::StringW key);

  static inline ::Amazon::Runtime::Internal::Settings::PersistenceManager* New_ctor();

  /// @brief Method SaveSettings, addr 0x2451168, size 0x4, virtual true, abstract: false, final true
  inline void SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings);

  /// @brief Method SetSetting, addr 0x2451858, size 0x88, virtual false, abstract: false, final false
  inline void SetSetting(::StringW key, ::StringW value);

  /// @brief Method Watch, addr 0x24519a0, size 0xd0, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::SettingsWatcher* Watch(::StringW type);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>*& __cordl_internal_get__watchers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>*> const&
  __cordl_internal_get__watchers() const;

  constexpr void __cordl_internal_set__watchers(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>* value);

  /// @brief Method .ctor, addr 0x2450b0c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method disableWatcher, addr 0x2451c64, size 0x7c, virtual false, abstract: false, final false
  inline void disableWatcher(::StringW type);

  /// @brief Method enableWatcher, addr 0x2451be4, size 0x80, virtual false, abstract: false, final false
  inline void enableWatcher(::StringW type);

  /// @brief Method getFileFromType, addr 0x2451a70, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW getFileFromType(::StringW type);

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_ENCRYPTEDKEYS();

  static inline ::StringW getStaticF_SettingsStoreFolder();

  static inline ::Amazon::Runtime::Internal::Settings::IPersistenceManager* getStaticF__Instance_k__BackingField();

  static inline ::Amazon::Runtime::Internal::Util::Logger* getStaticF__logger();

  /// @brief Method get_Instance, addr 0x2450b88, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::IPersistenceManager* get_Instance();

  /// @brief Convert to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
  constexpr ::Amazon::Runtime::Internal::Settings::IPersistenceManager* i___Amazon__Runtime__Internal__Settings__IPersistenceManager() noexcept;

  /// @brief Method loadSettingsType, addr 0x2450c40, size 0x528, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* loadSettingsType(::StringW type);

  /// @brief Method saveSettingsType, addr 0x245116c, size 0x530, virtual false, abstract: false, final false
  inline void saveSettingsType(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings);

  static inline void setStaticF_ENCRYPTEDKEYS(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline void setStaticF_SettingsStoreFolder(::StringW value);

  static inline void setStaticF__Instance_k__BackingField(::Amazon::Runtime::Internal::Settings::IPersistenceManager* value);

  static inline void setStaticF__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method set_Instance, addr 0x2450be0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_Instance(::Amazon::Runtime::Internal::Settings::IPersistenceManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistenceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistenceManager(PersistenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistenceManager(PersistenceManager const&) = delete;

  /// @brief Field _watchers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsWatcher*>* ____watchers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::PersistenceManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::PersistenceManager, ____watchers) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::PersistenceManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::PersistenceManager*, "Amazon.Runtime.Internal.Settings", "PersistenceManager");

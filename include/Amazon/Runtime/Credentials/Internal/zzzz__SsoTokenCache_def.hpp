#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SsoTokenCache)
namespace Amazon::Runtime::Credentials::Internal {
class SsoToken;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
// Forward declare root types
namespace Amazon::Runtime::Credentials::Internal {
class SsoTokenCache;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Credentials::Internal::SsoTokenCache);
// Type: Amazon.Runtime.Credentials.Internal::SsoTokenCache
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Credentials::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Credentials.Internal::SsoTokenCache*
class CORDL_TYPE SsoTokenCache : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_StartUrl))::StringW StartUrl;

  /// @brief Field <StartUrl>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__StartUrl_k__BackingField, put = __cordl_internal_set__StartUrl_k__BackingField))::StringW _StartUrl_k__BackingField;

  /// @brief Field _cachePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cachePath, put = __cordl_internal_set__cachePath))::StringW _cachePath;

  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Method GenerateSha1Hash, addr 0x2027388, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW GenerateSha1Hash(::StringW text);

  /// @brief Method GetAccessToken, addr 0x20269e0, size 0x30, virtual false, abstract: false, final false
  inline ::StringW GetAccessToken();

  /// @brief Method GetCacheFilename, addr 0x2026990, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetCacheFilename(::StringW startUrl);

  /// @brief Method GetDefaultSsoTokenCacheFolder, addr 0x20265c8, size 0x204, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultSsoTokenCacheFolder();

  /// @brief Method Load, addr 0x2026a10, size 0x278, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Credentials::Internal::SsoToken* Load();

  static inline ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* New_ctor(::StringW cacheFolder, ::StringW startUrl);

  static inline ::Amazon::Runtime::Credentials::Internal::SsoTokenCache* New_ctor(::StringW startUrl);

  /// @brief Method TrySave, addr 0x2026d1c, size 0x234, virtual false, abstract: false, final false
  inline bool TrySave(::Amazon::Runtime::Credentials::Internal::SsoToken* token);

  constexpr ::StringW const& __cordl_internal_get__StartUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StartUrl_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__cachePath() const;

  constexpr ::StringW& __cordl_internal_get__cachePath();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__StartUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__cachePath(::StringW value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x20267cc, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::StringW cacheFolder, ::StringW startUrl);

  /// @brief Method .ctor, addr 0x202659c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW startUrl);

  /// @brief Method get_StartUrl, addr 0x2026594, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StartUrl();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SsoTokenCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SsoTokenCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SsoTokenCache(SsoTokenCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SsoTokenCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SsoTokenCache(SsoTokenCache const&) = delete;

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field <StartUrl>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____StartUrl_k__BackingField;

  /// @brief Field _cachePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____cachePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Credentials::Internal::SsoTokenCache, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoTokenCache, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoTokenCache, ____StartUrl_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Credentials::Internal::SsoTokenCache, ____cachePath) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Credentials::Internal
NEED_NO_BOX(::Amazon::Runtime::Credentials::Internal::SsoTokenCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Credentials::Internal::SsoTokenCache*, "Amazon.Runtime.Credentials.Internal", "SsoTokenCache");

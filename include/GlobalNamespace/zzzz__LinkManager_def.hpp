#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LinkManager)
// Forward declare root types
namespace GlobalNamespace {
class LinkManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LinkManager);
// Type: ::LinkManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LinkManager*
class CORDL_TYPE LinkManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method OpenDiscordURL, addr 0x2f6c4f8, size 0x44, virtual false, abstract: false, final false
  static inline void OpenDiscordURL();

  /// @brief Method OpenLeaveReviewURL, addr 0x2f6c544, size 0x98, virtual false, abstract: false, final false
  static inline void OpenLeaveReviewURL();

  /// @brief Method OpenOculusStorePDPAndroid, addr 0x2f6c5dc, size 0x4f0, virtual false, abstract: false, final false
  static inline void OpenOculusStorePDPAndroid(::StringW targetAppID);

  /// @brief Method OpenURL, addr 0x2f6c53c, size 0x8, virtual false, abstract: false, final false
  static inline void OpenURL(::StringW url);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkManager(LinkManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkManager(LinkManager const&) = delete;

  /// @brief Field DICSORD_LINK offset 0xffffffff size 0x8
  static constexpr ::ConstString DICSORD_LINK{ u"https://discord.gg/PtY9bDNZWX" };

  /// @brief Field OCULUS_STORE_APP_ID offset 0xffffffff size 0x8
  static constexpr ::ConstString OCULUS_STORE_APP_ID{ u"7276525889052788" };

  /// @brief Field OCULUS_STORE_PDP_URL offset 0xffffffff size 0x8
  static constexpr ::ConstString OCULUS_STORE_PDP_URL{ u"https://www.meta.com/en-gb/experiences/7276525889052788/" };

  /// @brief Field READABLE_DISCORD_LINK offset 0xffffffff size 0x8
  static constexpr ::ConstString READABLE_DISCORD_LINK{ u"discord.gg/yeeps" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LinkManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LinkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinkManager*, "", "LinkManager");

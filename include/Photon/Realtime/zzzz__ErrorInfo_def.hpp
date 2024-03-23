#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorInfo)
namespace ExitGames::Client::Photon {
class EventData;
}
// Forward declare root types
namespace Photon::Realtime {
class ErrorInfo;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ErrorInfo);
// Type: Photon.Realtime::ErrorInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ErrorInfo*
class CORDL_TYPE ErrorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Info, put = __cordl_internal_set_Info))::StringW Info;

  static inline ::Photon::Realtime::ErrorInfo* New_ctor(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method ToString, addr 0x2244970, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_Info() const;

  constexpr ::StringW& __cordl_internal_get_Info();

  constexpr void __cordl_internal_set_Info(::StringW value);

  /// @brief Method .ctor, addr 0x2243b6c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::EventData* eventData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorInfo(ErrorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorInfo(ErrorInfo const&) = delete;

  /// @brief Field Info, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ErrorInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::ErrorInfo, ___Info) == 0x10, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ErrorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ErrorInfo*, "Photon.Realtime", "ErrorInfo");

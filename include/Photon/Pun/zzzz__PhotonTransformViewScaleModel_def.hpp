#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransformViewScaleModel)
namespace Photon::Pun {
struct __PhotonTransformViewScaleModel__InterpolateOptions;
}
// Forward declare root types
namespace Photon::Pun {
struct __PhotonTransformViewScaleModel__InterpolateOptions;
}
namespace Photon::Pun {
class PhotonTransformViewScaleModel;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions);
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformViewScaleModel);
// Type: ::InterpolateOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: true
// CS Name: ::PhotonTransformViewScaleModel::InterpolateOptions
struct CORDL_TYPE __PhotonTransformViewScaleModel__InterpolateOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PhotonTransformViewScaleModel__InterpolateOptions_Unwrapped
  enum struct ____PhotonTransformViewScaleModel__InterpolateOptions_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0x0),
    __E_MoveTowards = static_cast<int32_t>(0x1),
    __E_Lerp = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PhotonTransformViewScaleModel__InterpolateOptions_Unwrapped() const noexcept {
    return static_cast<____PhotonTransformViewScaleModel__InterpolateOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PhotonTransformViewScaleModel__InterpolateOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PhotonTransformViewScaleModel__InterpolateOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions const Disabled;

  /// @brief Field Lerp value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions const Lerp;

  /// @brief Field MoveTowards value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions const MoveTowards;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun
// Type: Photon.Pun::PhotonTransformViewScaleModel
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformViewScaleModel*
class CORDL_TYPE PhotonTransformViewScaleModel : public ::System::Object {
public:
  // Declarations
  using InterpolateOptions = ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions;

  /// @brief Field InterpolateLerpSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateLerpSpeed, put = __cordl_internal_set_InterpolateLerpSpeed)) float_t InterpolateLerpSpeed;

  /// @brief Field InterpolateMoveTowardsSpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateMoveTowardsSpeed, put = __cordl_internal_set_InterpolateMoveTowardsSpeed)) float_t InterpolateMoveTowardsSpeed;

  /// @brief Field InterpolateOption, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_InterpolateOption, put = __cordl_internal_set_InterpolateOption))::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions InterpolateOption;

  /// @brief Field SynchronizeEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_SynchronizeEnabled, put = __cordl_internal_set_SynchronizeEnabled)) bool SynchronizeEnabled;

  static inline ::Photon::Pun::PhotonTransformViewScaleModel* New_ctor();

  constexpr float_t const& __cordl_internal_get_InterpolateLerpSpeed() const;

  constexpr float_t& __cordl_internal_get_InterpolateLerpSpeed();

  constexpr float_t const& __cordl_internal_get_InterpolateMoveTowardsSpeed() const;

  constexpr float_t& __cordl_internal_get_InterpolateMoveTowardsSpeed();

  constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions const& __cordl_internal_get_InterpolateOption() const;

  constexpr ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions& __cordl_internal_get_InterpolateOption();

  constexpr bool const& __cordl_internal_get_SynchronizeEnabled() const;

  constexpr bool& __cordl_internal_get_SynchronizeEnabled();

  constexpr void __cordl_internal_set_InterpolateLerpSpeed(float_t value);

  constexpr void __cordl_internal_set_InterpolateMoveTowardsSpeed(float_t value);

  constexpr void __cordl_internal_set_InterpolateOption(::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions value);

  constexpr void __cordl_internal_set_SynchronizeEnabled(bool value);

  /// @brief Method .ctor, addr 0x26082e8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformViewScaleModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformViewScaleModel(PhotonTransformViewScaleModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformViewScaleModel(PhotonTransformViewScaleModel const&) = delete;

  /// @brief Field SynchronizeEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___SynchronizeEnabled;

  /// @brief Field InterpolateOption, offset: 0x14, size: 0x4, def value: None
  ::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions ___InterpolateOption;

  /// @brief Field InterpolateMoveTowardsSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___InterpolateMoveTowardsSpeed;

  /// @brief Field InterpolateLerpSpeed, offset: 0x1c, size: 0x4, def value: None
  float_t ___InterpolateLerpSpeed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformViewScaleModel, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___SynchronizeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateMoveTowardsSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateLerpSpeed) == 0x1c, "Offset mismatch!");

} // namespace Photon::Pun
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::__PhotonTransformViewScaleModel__InterpolateOptions, "Photon.Pun", "PhotonTransformViewScaleModel/InterpolateOptions");
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewScaleModel);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewScaleModel*, "Photon.Pun", "PhotonTransformViewScaleModel");

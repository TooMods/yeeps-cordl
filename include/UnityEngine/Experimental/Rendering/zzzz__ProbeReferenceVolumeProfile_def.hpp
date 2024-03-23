#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeReferenceVolumeProfile_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolumeProfile)
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolumeProfile__Version;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct __ProbeReferenceVolumeProfile__Version;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeReferenceVolumeProfile;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile);
// Type: ::Version
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::ProbeReferenceVolumeProfile::Version
struct CORDL_TYPE __ProbeReferenceVolumeProfile__Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProbeReferenceVolumeProfile__Version_Unwrapped
  enum struct ____ProbeReferenceVolumeProfile__Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProbeReferenceVolumeProfile__Version_Unwrapped() const noexcept {
    return static_cast<____ProbeReferenceVolumeProfile__Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProbeReferenceVolumeProfile__Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProbeReferenceVolumeProfile__Version(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version const Initial;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Type: UnityEngine.Experimental.Rendering::ProbeReferenceVolumeProfile
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeReferenceVolumeProfile*
class CORDL_TYPE ProbeReferenceVolumeProfile : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using Version = ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version;

  __declspec(property(get = get_cellSizeInBricks)) int32_t cellSizeInBricks;

  __declspec(property(get = get_cellSizeInMeters)) float_t cellSizeInMeters;

  __declspec(property(get = get_maxSubdivision)) int32_t maxSubdivision;

  __declspec(property(get = get_minBrickSize)) float_t minBrickSize;

  /// @brief Field minDistanceBetweenProbes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_minDistanceBetweenProbes, put = __cordl_internal_set_minDistanceBetweenProbes)) float_t minDistanceBetweenProbes;

  /// @brief Field simplificationLevels, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_simplificationLevels, put = __cordl_internal_set_simplificationLevels)) int32_t simplificationLevels;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version version;

  /// @brief Method IsEquivalent, addr 0x23c7844, size 0xd8, virtual false, abstract: false, final false
  inline bool IsEquivalent(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile* otherProfile);

  static inline ::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile* New_ctor();

  /// @brief Method OnEnable, addr 0x23c77e0, size 0x64, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr float_t const& __cordl_internal_get_minDistanceBetweenProbes() const;

  constexpr float_t& __cordl_internal_get_minDistanceBetweenProbes();

  constexpr int32_t const& __cordl_internal_get_simplificationLevels() const;

  constexpr int32_t& __cordl_internal_get_simplificationLevels();

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_minDistanceBetweenProbes(float_t value);

  constexpr void __cordl_internal_set_simplificationLevels(int32_t value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version value);

  /// @brief Method .ctor, addr 0x23c791c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellSizeInBricks, addr 0x23c7720, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_cellSizeInBricks();

  /// @brief Method get_cellSizeInMeters, addr 0x23c777c, size 0x64, virtual false, abstract: false, final false
  inline float_t get_cellSizeInMeters();

  /// @brief Method get_maxSubdivision, addr 0x23c7754, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_maxSubdivision();

  /// @brief Method get_minBrickSize, addr 0x23c7760, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_minBrickSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolumeProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolumeProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolumeProfile(ProbeReferenceVolumeProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolumeProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolumeProfile(ProbeReferenceVolumeProfile const&) = delete;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version ___version;

  /// @brief Field simplificationLevels, offset: 0x1c, size: 0x4, def value: None
  int32_t ___simplificationLevels;

  /// @brief Field minDistanceBetweenProbes, offset: 0x20, size: 0x4, def value: None
  float_t ___minDistanceBetweenProbes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile, ___simplificationLevels) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile, ___minDistanceBetweenProbes) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::__ProbeReferenceVolumeProfile__Version, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolumeProfile/Version");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile*, "UnityEngine.Experimental.Rendering", "ProbeReferenceVolumeProfile");

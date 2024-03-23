#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticsStoreManager)
namespace GlobalNamespace {
class CosmeticsStoreInstance;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsStoreManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticsStoreManager);
// Type: ::CosmeticsStoreManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticsStoreManager*
class CORDL_TYPE CosmeticsStoreManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::CosmeticsStoreManager>> {
public:
  // Declarations
  /// @brief Field cosmeticsStoreInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cosmeticsStoreInstances,
                             put = setStaticF_cosmeticsStoreInstances))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>* cosmeticsStoreInstances;

  /// @brief Field nextTimeUntilNextRotationUpdateTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_nextTimeUntilNextRotationUpdateTime, put = __cordl_internal_set_nextTimeUntilNextRotationUpdateTime)) float_t nextTimeUntilNextRotationUpdateTime;

  /// @brief Method GetStoreInstance, addr 0x2768980, size 0x1c0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CosmeticsStoreInstance* GetStoreInstance(::StringW themeKey);

  /// @brief Method GetStoreInstanceForCurrentTheme, addr 0x2765e64, size 0x124, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::CosmeticsStoreInstance* GetStoreInstanceForCurrentTheme();

  static inline ::GlobalNamespace::CosmeticsStoreManager* New_ctor();

  /// @brief Method Start, addr 0x276886c, size 0x114, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2768b40, size 0x1bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextTimeUntilNextRotationUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextTimeUntilNextRotationUpdateTime();

  constexpr void __cordl_internal_set_nextTimeUntilNextRotationUpdateTime(float_t value);

  /// @brief Method .ctor, addr 0x2768cfc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>* getStaticF_cosmeticsStoreInstances();

  static inline void setStaticF_cosmeticsStoreInstances(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticsStoreInstance*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticsStoreManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticsStoreManager(CosmeticsStoreManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticsStoreManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticsStoreManager(CosmeticsStoreManager const&) = delete;

  /// @brief Field nextTimeUntilNextRotationUpdateTime, offset: 0x18, size: 0x4, def value: None
  float_t ___nextTimeUntilNextRotationUpdateTime;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Cosmetics Store: " };

  /// @brief Field globalRotationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString globalRotationKey{ u"cosmeticsStore" };

  /// @brief Field timeUntilNextRotationUpdateIntervals offset 0xffffffff size 0x4
  static constexpr float_t timeUntilNextRotationUpdateIntervals{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticsStoreManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsStoreManager, ___nextTimeUntilNextRotationUpdateTime) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticsStoreManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsStoreManager*, "", "CosmeticsStoreManager");

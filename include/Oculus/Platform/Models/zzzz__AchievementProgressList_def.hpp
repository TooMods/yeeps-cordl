#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementProgressList)
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementProgressList);
// Type: Oculus.Platform.Models::AchievementProgressList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AchievementProgressList*
class CORDL_TYPE AchievementProgressList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::AchievementProgress*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::AchievementProgressList* New_ctor(void* a);

  /// @brief Method .ctor, addr 0x1e5ed5c, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor(void* a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementProgressList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementProgressList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementProgressList(AchievementProgressList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementProgressList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementProgressList(AchievementProgressList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementProgressList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementProgressList*, "Oculus.Platform.Models", "AchievementProgressList");

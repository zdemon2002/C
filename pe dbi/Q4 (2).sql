select p.ProductID, p.Name, p.Color, p.ModelID, pm.Name as 'ModelName', pch.StartDate,pch.EndDate 
from ((Product p inner join ProductCostHistory pch on p.ProductID = pch.ProductID) inner join 
ProductModel pm on p.ModelID = pm.ModelID) where p.Color = 'black' and p.name like 'HL%'
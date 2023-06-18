Select p.firstName,p.lastName,a.city,a.state
from Person p
LEFT JOIN Address a
on p.personID = a.personID